/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/des/util.c,v $
 * $Author: wollman $
 *
 * Copyright 1988 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 *
 * Miscellaneous debug printing utilities
 */

#ifndef	lint
static char rcsid_util_c[] =
"$Header: /a/cvs/386BSD/src/kerberosIV/des/util.c,v 1.1 1994/02/25 01:13:36 wollman Exp $";
#endif	lint

#include <mit-copyright.h>
#include <stdio.h>
#include <des.h>

des_cblock_print_file(x, fp)
    des_cblock *x;
    FILE *fp;
{
    unsigned char *y = (unsigned char *) x;
    register int i = 0;
    fprintf(fp," 0x { ");

    while (i++ < 8) {
	fprintf(fp,"%x",*y++);
	if (i < 8)
	    fprintf(fp,", ");
    }
    fprintf(fp," }");
}
