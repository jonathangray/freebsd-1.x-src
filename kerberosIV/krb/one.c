/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/krb/one.c,v $
 * $Author: wollman $
 *
 * Copyright 1988 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 */

#ifndef	lint
static char rcsid_one_c[] =
"$Header: /a/cvs/386BSD/src/kerberosIV/krb/one.c,v 1.1 1994/02/25 01:14:23 wollman Exp $";
#endif	lint

#include <mit-copyright.h>

/*
 * definition of variable set to 1.
 * used in krb_conf.h to determine host byte order.
 */

int krbONE = 1;
