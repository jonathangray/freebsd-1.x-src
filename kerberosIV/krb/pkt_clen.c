/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/krb/pkt_clen.c,v $
 * $Author: wollman $
 *
 * Copyright 1985, 1986, 1987, 1988 by the Massachusetts Institute
 * of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 */

#ifndef lint
static char *rcsid_pkt_clen_c =
"$Header: /a/cvs/386BSD/src/kerberosIV/krb/pkt_clen.c,v 1.1 1994/02/25 01:14:24 wollman Exp $";
#endif /* lint */

#include <mit-copyright.h>
#include <des.h>
#include <krb.h>
#include <prot.h>

extern int krb_debug;
extern int swap_bytes;

/*
 * Given a pointer to an AUTH_MSG_KDC_REPLY packet, return the length of
 * its ciphertext portion.  The external variable "swap_bytes" is assumed
 * to have been set to indicate whether or not the packet is in local
 * byte order.  pkt_clen() takes this into account when reading the
 * ciphertext length out of the packet.
 */

pkt_clen(pkt)
    KTEXT pkt;
{
    static unsigned short temp,temp2;
    int clen = 0;

    /* Start of ticket list */
    unsigned char *ptr = pkt_a_realm(pkt) + 10
	+ strlen((char *)pkt_a_realm(pkt));

    /* Finally the length */
    bcopy((char *)(++ptr),(char *)&temp,2); /* alignment */
    if (swap_bytes) {
        /* assume a short is 2 bytes?? */
        swab((char *)&temp,(char *)&temp2,2);
        temp = temp2;
    }

    clen = (int) temp;

    if (krb_debug)
	printf("Clen is %d\n",clen);
    return(clen);
}
