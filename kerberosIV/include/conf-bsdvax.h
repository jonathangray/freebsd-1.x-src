/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/include/conf-bsdvax.h,v $
 * $Author: wollman $
 * $Header: /a/cvs/386BSD/src/kerberosIV/include/conf-bsdvax.h,v 1.1 1994/02/25 01:13:42 wollman Exp $
 *
 * Copyright 1988 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 *
 * Machine-type definitions: VAX
 */

#include <mit-copyright.h>

#define VAX
#define BITS32
#define BIG
#define LSBFIRST
#define BSDUNIX

#ifndef __STDC__
#ifndef NOASM
#define VAXASM
#endif /* no assembly */
#endif /* standard C */
