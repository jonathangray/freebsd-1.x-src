/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/krb/get_tf_realm.c,v $
 * $Author: wollman $
 *
 * Copyright 1987, 1988 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 */

#ifndef lint
static char rcsid_get_tf_realm_c[] =
"$Id: get_tf_realm.c,v 1.1 1994/02/25 01:14:15 wollman Exp $";
#endif /* lint */

#include <mit-copyright.h>
#include <des.h>
#include <krb.h>
#include <strings.h>

/*
 * This file contains a routine to extract the realm of a kerberos
 * ticket file.
 */

/*
 * krb_get_tf_realm() takes two arguments: the name of a ticket 
 * and a variable to store the name of the realm in.
 * 
 */

krb_get_tf_realm(ticket_file, realm)
  char *ticket_file;
  char *realm;
{
    return(krb_get_tf_fullname(ticket_file, 0, 0, realm));
}
