#	From: @(#)Makefile	5.3 (Berkeley) 2/25/91
#	$Id: Makefile,v 1.1 1994/02/25 01:14:48 wollman Exp $

PROG=	register
SRCS=	register.c des_rw.c
CFLAGS+=-DCRYPT -DDEBUG -DKERBEROS -I${.CURDIR}/../include
.PATH:	${.CURDIR}/../../usr.bin/rlogin
DPADD=	${LIBKRB} ${LIBDES}
LDADD=	-L${KRBOBJDIR} -lkrb -L${DESOBJDIR} -ldes
BINDIR=	/usr/bin
BINOWN=	root
BINMODE=4555

.include <bsd.prog.mk>
