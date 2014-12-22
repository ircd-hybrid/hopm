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
along with this program; if not, write to:

      The Free Software Foundation, Inc.
      59 Temple Place - Suite 330
      Boston, MA  02111-1307, USA.
 
*/

/*
 * This code is borrowed from ircd-hybrid version 7
 * -TimeMr14C
 */

#include <errno.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "setup.h"
#include "inet.h"
#include "log.h"

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
 * From: Thomas Helvey <tomh@inxpress.net>
 */
#if 0
static const char *IpQuadTab[] =
   {
      "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
      "10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
      "20", "21", "22", "23", "24", "25", "26", "27", "28", "29",
      "30", "31", "32", "33", "34", "35", "36", "37", "38", "39",
      "40", "41", "42", "43", "44", "45", "46", "47", "48", "49",
      "50", "51", "52", "53", "54", "55", "56", "57", "58", "59",
      "60", "61", "62", "63", "64", "65", "66", "67", "68", "69",
      "70", "71", "72", "73", "74", "75", "76", "77", "78", "79",
      "80", "81", "82", "83", "84", "85", "86", "87", "88", "89",
      "90", "91", "92", "93", "94", "95", "96", "97", "98", "99",
      "100", "101", "102", "103", "104", "105", "106", "107", "108", "109",
      "110", "111", "112", "113", "114", "115", "116", "117", "118", "119",
      "120", "121", "122", "123", "124", "125", "126", "127", "128", "129",
      "130", "131", "132", "133", "134", "135", "136", "137", "138", "139",
      "140", "141", "142", "143", "144", "145", "146", "147", "148", "149",
      "150", "151", "152", "153", "154", "155", "156", "157", "158", "159",
      "160", "161", "162", "163", "164", "165", "166", "167", "168", "169",
      "170", "171", "172", "173", "174", "175", "176", "177", "178", "179",
      "180", "181", "182", "183", "184", "185", "186", "187", "188", "189",
      "190", "191", "192", "193", "194", "195", "196", "197", "198", "199",
      "200", "201", "202", "203", "204", "205", "206", "207", "208", "209",
      "210", "211", "212", "213", "214", "215", "216", "217", "218", "219",
      "220", "221", "222", "223", "224", "225", "226", "227", "228", "229",
      "230", "231", "232", "233", "234", "235", "236", "237", "238", "239",
      "240", "241", "242", "243", "244", "245", "246", "247", "248", "249",
      "250", "251", "252", "253", "254", "255"
   };
#endif


/*
 * inetntoa - in_addr to string
 *      changed name to remove collision possibility and
 *      so behaviour is guaranteed to take a pointer arg.
 *      -avalon 23/11/92
 *  inet_ntoa --  returned the dotted notation of a given
 *      internet number
 *      argv 11/90).
 *  inet_ntoa --  its broken on some Ultrix/Dynix too. -avalon
 *
 * XXX - This does not seem to be used anymore?
 *  -grifferz
 */

#if 0
static char *inetntoa(char *in)
{
   static char buf[16];
   register char *bufptr = buf;
   register const unsigned char *a = (const unsigned char *) in;
   register const char *n;

   n = IpQuadTab[*a++];
   while (*n)
      *bufptr++ = *n++;
   *bufptr++ = '.';
   n = IpQuadTab[*a++];
   while (*n)
      *bufptr++ = *n++;
   *bufptr++ = '.';
   n = IpQuadTab[*a++];
   while (*n)
      *bufptr++ = *n++;
   *bufptr++ = '.';
   n = IpQuadTab[*a];
   while (*n)
      *bufptr++ = *n++;
   *bufptr = '\0';
   return buf;
}
#endif

/*
 * Copyright (c) 1996-1999 by Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE   
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR 
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

/*
 * WARNING: Don't even consider trying to compile this on a system where 
 * sizeof(int) < 4.  sizeof(int) > 4 is fine; all the world's not a VAX.
 */

/*
 * XXX - Don't seem to be used anymore.
 *  -grifferz
 */
#if 0
static const char *inet_ntop4(const unsigned char *src, char *dst, unsigned int size);
#endif
#ifdef IPV6
static const char *inet_ntop6(const unsigned char *src, char *dst, unsigned int size);
#endif

/* const char *
 * inet_ntop4(src, dst, size)
 *      format an IPv4 address
 * return:
 *      `dst' (as a const)
 * notes:
 *      (1) uses no statics
 *      (2) takes a u_char* not an in_addr as input
 * author:
 *      Paul Vixie, 1996.
 *
 * XXX - It seems this isn't used anywhere now?
 *  -grifferz
 */
#if 0
static const char *inet_ntop4(const unsigned char *src, char *dst, unsigned int size)
{
   if (size < 15)
      return NULL;
   return strcpy(dst, inetntoa((char *) src));
}
#endif

/* const char *
 * inet_ntop6(src, dst, size)
 *      convert IPv6 binary address into presentation (printable) format
 * author:
 *      Paul Vixie, 1996.
 */
#ifdef IPV6
static const char *inet_ntop6(const unsigned char *src, char *dst, unsigned int size)
{
   /*
    * Note that int32_t and int16_t need only be "at least" large enough
    * to contain a value of the specified size.  On some systems, like
    * Crays, there is no such thing as an integer variable with 16 bits.
    * Keep this in mind if you think this function should have been coded
    * to use pointer overlays.  All the world's not a VAX.
    */
   char tmp[sizeof "ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255"], *tp;
   struct
   {
      int base, len;
   }
   best, cur;
   u_int words[IN6ADDRSZ / INT16SZ];
   int i;

   /*
    * Preprocess:
    *      Copy the input (bytewise) array into a wordwise array.
    *      Find the longest run of 0x00's in src[] for :: shorthanding.  
    */
   memset(words, '\0', sizeof words);
   for (i = 0; i < IN6ADDRSZ; i += 2)
      words[i / 2] = (src[i] << 8) | src[i + 1];
   best.base = -1;
   cur.base = -1;
   for (i = 0; i < (IN6ADDRSZ / INT16SZ); i++)
   {
      if (words[i] == 0)
      {
         if (cur.base == -1)
            cur.base = i, cur.len = 1;
         else
            cur.len++;
      }
      else
      {
         if (cur.base != -1)
         {
            if (best.base == -1 || cur.len > best.len)
               best = cur;
            cur.base = -1;
         }
      }
   }
   if (cur.base != -1)
   {
      if (best.base == -1 || cur.len > best.len)
         best = cur;
   }
   if (best.base != -1 && best.len < 2)
      best.base = -1;

   /*
    * Format the result.
    */
   tp = tmp;
   for (i = 0; i < (IN6ADDRSZ / INT16SZ); i++)
   {
      /* Are we inside the best run of 0x00's? */
      if (best.base != -1 && i >= best.base && i < (best.base + best.len))
      {
         if (i == best.base)
            *tp++ = ':';
         continue;
      }
      /* Are we following an initial run of 0x00s or any real hex? */
      if (i != 0)
         *tp++ = ':';
      /* Is this address an encapsulated IPv4? */
      if (i == 6 && best.base == 0 && (best.len == 6 || (best.len == 5 && words[5] == 0xffff)))
      {
         if (!inet_ntop4(src + 12, tp, sizeof tmp - (tp - tmp)))
            return (NULL);
         tp += strlen(tp);
         break;
      }
      tp += sprintf(tp, "%x", words[i]);
   }
   /* Was it a trailing run of 0x00's? */
   if (best.base != -1 && (best.base + best.len) == (IN6ADDRSZ / INT16SZ))
      *tp++ = ':';

   *tp++ = '\0';

   /*
    * Check for overflow, copy, and we're done.
    */

   if ((tp - tmp) > size)
   {
      return (NULL);
   }
   return strcpy(dst, tmp);
}
#endif

#if 0
/*
 * This code does not seem to be used anywhere currently?
 * -grifferz
 */

/* char *
 * inetntop(af, src, dst, size)
 *      convert a network format address to presentation format.
 * return:
 *      pointer to presentation format address (`dst'), or NULL (see errno).
 * author:
 *      Paul Vixie, 1996.
 */
const char *inetntop(int af, const void *src, char *dst, unsigned int size)
{
   switch (af)
   {
      case AF_INET:
         return (inet_ntop4(src, dst, size));
#ifdef IPV6

      case AF_INET6:
         if (IN6_IS_ADDR_V4MAPPED((const struct in6_addr *) src) ||
               IN6_IS_ADDR_V4COMPAT((const struct in6_addr *) src))
            return (inet_ntop4
                    ((unsigned char *) &((struct in6_addr *) src)->s6_addr[12], dst, size));
         else
            return (inet_ntop6(src, dst, size));

#endif

      default:
         return (NULL);
   }
   /* NOTREACHED */
}
#endif

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
   while ((ch = *src++) != '\0')
   {

      if (ch >= '0' && ch <= '9')
      {
         unsigned int new = *tp * 10 + (ch - '0');

         if (new > 255)
            return (0);
         *tp = new;
         if (!saw_digit)
         {
            if (++octets > 4)
               return (0);
            saw_digit = 1;
         }
      }
      else if (ch == '.' && saw_digit)
      {
         if (octets == 4)
            return (0);
         *++tp = 0;
         saw_digit = 0;
      }
      else
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
   while ((ch = ToLower(*src++)) != '\0')
   {
      const char *pch;

      pch = strchr(xdigits, ch);
      if (pch != NULL)
      {
         val <<= 4;
         val |= (pch - xdigits);
         if (val > 0xffff)
            return (0);
         saw_xdigit = 1;
         continue;
      }
      if (ch == ':')
      {
         curtok = src;
         if (!saw_xdigit)
         {
            if (colonp)
               return (0);
            colonp = tp;
            continue;
         }
         else if (*src == '\0')
         {
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

      if (*src != '\0' && ch == '.')
      {
         if (((tp + INADDRSZ) <= endp) && inet_pton4(curtok, tp) > 0)
         {
            tp += INADDRSZ;
            saw_xdigit = 0;
            break;          /* '\0' was seen by inet_pton4(). */
         }
      }
      else
         continue;
      return (0);
   }
   if (saw_xdigit)
   {
      if (tp + INT16SZ > endp)
         return (0);
      *tp++ = (unsigned char) (val >> 8) & 0xff;
      *tp++ = (unsigned char) val & 0xff;
   }
   if (colonp != NULL)
   {
      /*
       * Since some memmove()'s erroneously fail to handle
       * overlapping regions, we'll do the shift by hand.
       */
      const int n = tp - colonp;
      int i;

      if (tp == endp)
         return (0);
      for (i = 1; i <= n; i++)
      {
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

int bopm_inet_pton(af, src, dst)
int af;
const char *src;
void *dst;
{
   switch (af)
   {
      case AF_INET:
         return (inet_pton4(src, dst));
#ifdef IPV6

      case AF_INET6:
         /* Somebody might have passed as an IPv4 address this is sick but it works */
         if (inet_pton4(src, dst))
         {
            char tmp[HOSTIPLEN];
            sprintf(tmp, "::ffff:%s", src);
            return (inet_pton6(tmp, dst));
         }
         else
            return (inet_pton6(src, dst));
#endif	/* IPv6 */

      default:
         return (-1);
   }
   /* NOTREACHED */
}
#endif

