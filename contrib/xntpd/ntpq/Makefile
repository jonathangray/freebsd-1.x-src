#
# $Id: Makefile,v 1.2 1993/12/21 21:06:32 wollman Exp $
#

CFLAGS+= -I${.CURDIR}/../include
LDADD+= -L${.CURDIR}/../lib -lntp
DPADD+= -L${.CURDIR}/../lib/libntp.a

PROG= ntpq
MAN8= ${.CURDIR}/../doc/ntpq.8
CLEANFILES+= version.c
BINDIR= /usr/bin

SRCS= ntpq.c ntpq_ops.c version.c

beforedepend: version.c

version.c: ${.CURDIR}/../VERSION
	${.CURDIR}/../scripts/mkversion ntpq

.include <bsd.prog.mk>
