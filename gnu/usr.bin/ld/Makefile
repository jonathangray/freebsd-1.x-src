# $Id: Makefile,v 1.11 1993/12/02 00:56:32 jkh Exp $
#

PROG=	ld
SRCS=	ld.c symbol.c lib.c shlib.c warnings.c etc.c rrs.c xbits.c md.c
CFLAGS += -static -I$(.CURDIR) -I$(.CURDIR)/$(MACHINE)

LDADD+=	-lgnumalloc
DPADD+= /usr/lib/libgnumalloc.a

SUBDIR=	ldconfig ldd rtld

.PATH: $(.CURDIR)/$(MACHINE)

.include <bsd.prog.mk>
