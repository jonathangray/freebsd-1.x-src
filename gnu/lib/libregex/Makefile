# $Header: /a/cvs/386BSD/src/gnu/lib/libregex/Makefile,v 1.1 1993/07/30 20:15:28 conklin Exp $

LIB=	gnuregex
CFLAGS+=-DHAVE_STRING_H=1
SRCS=	regex.c
NOMAN=	noman

afterinstall:
	install -c -o root -g wheel -m 444 ${.CURDIR}/regex.h \
		${DESTDIR}/usr/include

.include <bsd.lib.mk>
