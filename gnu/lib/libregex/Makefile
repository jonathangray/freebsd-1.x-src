# $Header: /a/cvs/386BSD/src/gnu/lib/libregex/Makefile,v 1.5 1993/12/28 07:57:07 smace Exp $

SHLIB_MAJOR=1
SHLIB_MINOR=0

LIB=	gnuregex
CFLAGS+=-DHAVE_STRING_H=1
SRCS=	regex.c
NOMAN=	noman

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${.CURDIR}/regex.h \
		${DESTDIR}/usr/include

.include <bsd.lib.mk>
