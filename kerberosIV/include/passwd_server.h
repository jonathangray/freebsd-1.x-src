/*
 * $Source: /a/cvs/386BSD/src/kerberosIV/include/passwd_server.h,v $
 * $Author: wollman $
 * $Header: /a/cvs/386BSD/src/kerberosIV/include/passwd_server.h,v 1.1 1994/02/25 01:13:50 wollman Exp $ 
 *
 * Copyright 1987, 1988 by the Massachusetts Institute of Technology. 
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>. 
 *
 * Include file for password server
 */

#include <mit-copyright.h>

#ifndef PASSWD_SERVER_DEFS
#define PASSWD_SERVER_DEFS

#define PW_SRV_VERSION	2	/* version number */
#define	RETRY_LIMIT	1
#define	TIME_OUT	30
#define USER_TIMEOUT	90
#define MAX_KPW_LEN	40	/* hey, seems like a good number */

#define INSTALL_NEW_PW	(1<<0)	/*
				 * ver, cmd, name, password, old_pass,
				 * crypt_pass, uid
				 */

#define INSTALL_REPLY	(1<<1)	/* ver, cmd, name, password */

#endif /* PASSWD_SERVER_DEFS */
