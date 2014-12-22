/* vim: set shiftwidth=3 softtabstop=3 expandtab: */ 

/*
 * Copyright (C) 2002  Andy Smith
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to
 *
 *       The Free Software Foundation, Inc.
 *	59 Temple Place - Suite 330
 *	Boston, MA  02111-1307, USA
 */

#include "setup.h"

#include <stdio.h>

#ifdef STDC_HEADERS
# include <string.h>
#endif

#ifndef HAVE_INET_ATON
# include <netinet/in.h>
#endif

#include "compat.h"
#include "opm.h"


#ifndef HAVE_INET_ATON
/*
 * An implementation of inet_aton for those systems that don't have it
 * (Solaris, ...)
 */
int libopm_inet_aton(const char *cp, struct in_addr *inp)
{
	unsigned int a1, a2, a3, a4;
	unsigned long ret;

	if (strcmp(cp, "255.255.255.255") == 0) {
		inp->s_addr = (unsigned) -1;
		return 0;
	}

	if (sscanf(cp, "%u.%u.%u.%u", &a1, &a2, &a3, &a4) != 4 ||
	    a1 > 255 || a2 > 255 || a3 > 255 || a4 > 255) {
		return 0;
	}

	ret = (a1 << 24) | (a2 << 16) | (a3 << 8) | a4;

	inp->s_addr = htonl(ret);
	
	if (inp->s_addr == (unsigned) -1) {
		return 0;
	}
	return 1;
}
#endif
