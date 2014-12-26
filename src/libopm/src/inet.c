/*
Copyright (C) 2002 by the past and present ircd coders, and others.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to

      The Free Software Foundation, Inc.
      59 Temple Place - Suite 330
      Boston, MA  02111-1307, USA.

*/

/*
 * This code is borrowed from ircd-hybrid version 7
 * -TimeMr14C
 */

#include "setup.h"

#include <errno.h>
#include <stdio.h>
#include <assert.h>
#if STDC_HEADERS
# include <string.h>
# include <stdlib.h>
#endif
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include "inet.h"
#include "opm.h"

#ifndef INADDRSZ
#define INADDRSZ 4
#endif

#ifdef IPV6
#ifndef IN6ADDRSZ
#define IN6ADDRSZ 16
#endif
#endif


#ifndef INT16SZ
#define INT16SZ 2
#endif

#ifdef IPV6
#define HOSTIPLEN 53
#else
#define HOSTIPLEN 15
#endif


extern const unsigned char ToLowerTab[];
#define ToLower(c) (ToLowerTab[(unsigned char)(c)])

/*
 * WARNING: Don't even consider trying to compile this on a system where
 * sizeof(int) < 4.  sizeof(int) > 4 is fine; all the world's not a VAX.
 */

/* int
 * inet_pton(af, src, dst)
 *      convert from presentation format (which usually means ASCII printable)
 *      to network format (which is usually some kind of binary format).
 * return:
 *      1 if the address was valid for the specified address family
 *      0 if the address wasn't valid (`dst' is untouched in this case)
 *      -1 if some other error occurred (`dst' is untouched in this case, too)
 * author:
 *      Paul Vixie, 1996.
 */

/* int
 * inet_pton4(src, dst)
 *      like inet_aton() but without all the hexadecimal and shorthand.
 * return:
 *      1 if `src' is a valid dotted quad, else 0.
 * notice:
 *      does not touch `dst' unless it's returning 1.
 * author:
 *      Paul Vixie, 1996.
 */

#ifndef HAVE_INET_PTON

static int inet_pton4(src, dst)
     const char *src;
     unsigned char *dst;
{
int saw_digit, octets, ch;
unsigned char tmp[INADDRSZ], *tp;

    saw_digit = 0;  
    octets = 0;
    *(tp = tmp) = 0;
    while ((ch = *src++) != '\0') {

        if (ch >= '0' && ch <= '9') {
unsigned int new = *tp * 10 + (ch - '0');

            if (new > 255)
                return (0);
            *tp = new;
            if (!saw_digit) {
                if (++octets > 4)
                    return (0);   
                saw_digit = 1;
            }   
        } else if (ch == '.' && saw_digit) {
            if (octets == 4)
                return (0);
            *++tp = 0;
            saw_digit = 0;
        } else  
            return (0);
    }
    if (octets < 4) 
        return (0);
    memcpy(dst, tmp, INADDRSZ);
    return (1);
}  

#ifdef IPV6
/* int
 * inet_pton6(src, dst)
 *      convert presentation level address to network order binary form.
 * return:
 *      1 if `src' is a valid [RFC1884 2.2] address, else 0.
 * notice:
 *      (1) does not touch `dst' unless it's returning 1.
 *      (2) :: in a full address is silently ignored.
 * credit:
 *      inspired by Mark Andrews.
 * author:
 *      Paul Vixie, 1996.
 */

static int inet_pton6(src, dst)
     const char *src;
     unsigned char *dst;
{
static const char xdigits[] = "0123456789abcdef";
unsigned char tmp[IN6ADDRSZ], *tp, *endp, *colonp;
const char *curtok;
int ch, saw_xdigit;
unsigned int val;

    tp = memset(tmp, '\0', IN6ADDRSZ);
    endp = tp + IN6ADDRSZ;
    colonp = NULL;
    /* Leading :: requires some special handling. */
    if (*src == ':')
        if (*++src != ':')
            return (0);
    curtok = src;
    saw_xdigit = 0;
    val = 0;
    while ((ch = ToLower(*src++)) != '\0') {
const char *pch;

       pch = strchr(xdigits, ch);
        if (pch != NULL) {
            val <<= 4;
            val |= (pch - xdigits);
            if (val > 0xffff)  
                return (0);
            saw_xdigit = 1;
            continue;
        }
        if (ch == ':') {   
            curtok = src;
            if (!saw_xdigit) {
                if (colonp)
                    return (0);
                colonp = tp;
                continue;
            } else if (*src == '\0') {
                return (0);
            }  
            if (tp + INT16SZ > endp)
                return (0);
            *tp++ = (unsigned char) (val >> 8) & 0xff;
            *tp++ = (unsigned char) val & 0xff;
            saw_xdigit = 0;
            val = 0;
            continue;
        }

        if (*src != '\0' && ch == '.') {
            if (((tp + INADDRSZ) <= endp) && inet_pton4(curtok, tp) > 0) {
                tp += INADDRSZ;
                saw_xdigit = 0;
                break;          /* '\0' was seen by inet_pton4(). */
            }
        } else
            continue;
        return (0);
    }
    if (saw_xdigit) {
        if (tp + INT16SZ > endp)
            return (0);
        *tp++ = (unsigned char) (val >> 8) & 0xff;
        *tp++ = (unsigned char) val & 0xff;
    }
    if (colonp != NULL) {
        /*
         * Since some memmove()'s erroneously fail to handle
         * overlapping regions, we'll do the shift by hand.
         */
const int n = tp - colonp;
int i;

        if (tp == endp)
            return (0);
        for (i = 1; i <= n; i++) {
            endp[-i] = colonp[n - i];
            colonp[n - i] = 0;
        }
        tp = endp;
    }
    if (tp != endp)
        return (0);
    memcpy(dst, tmp, IN6ADDRSZ);
    return (1);
}
#endif	/* IPv6 */

int inet_pton(af, src, dst) 
     int af;
     const char *src;
     void *dst;
{
    switch (af) {             
        case AF_INET:
            return (inet_pton4(src, dst));
#ifdef IPV6
        case AF_INET6:   
            /* Somebody might have passed as an IPv4 address this is sick but it works */
            if (inet_pton4(src, dst)) {
char tmp[HOSTIPLEN];
                sprintf(tmp, "::ffff:%s", src);
                return (inet_pton6(tmp, dst));
            } else
                return (inet_pton6(src, dst));
#endif	/* IPv6 */
        default:
            return (-1);
    }
    /* NOTREACHED */
}

#endif
