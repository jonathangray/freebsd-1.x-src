/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/krb/fgetst.c,v $
 * $Author: wollman $ 
 *
 * Copyright 1987, 1988 by the Massachusetts Institute of Technology. 
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>. 
 */

#ifndef lint
static char rcsid_fgetst_c[] =
"$Header: /a/cvs/386BSD/src/kerberosIV/krb/fgetst.c,v 1.1 1994/02/25 01:14:12 wollman Exp $";
#endif				/* lint */

#include <mit-copyright.h>
#include <stdio.h>

/*
 * fgetst takes a file descriptor, a character pointer, and a count.
 * It reads from the file it has either read "count" characters, or
 * until it reads a null byte.  When finished, what has been read exists
 * in "s". If "count" characters were actually read, the last is changed
 * to a null, so the returned string is always null-terminated.  fgetst
 * returns the number of characters read, including the null terminator. 
 */

fgetst(f, s, n)
    FILE   *f;
    register char *s;
    int     n;
{
    register count = n;
    int     ch;		/* NOT char; otherwise you don't see EOF */

    while ((ch = getc(f)) != EOF && ch && --count) {
	*s++ = ch;
    }
    *s = '\0';
    return (n - count);
}
