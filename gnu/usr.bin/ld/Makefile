# $Id: Makefile,v 1.3 1993/11/05 01:35:24 ache Exp $
#

PROG=	ld
SRCS=	ld.c symbol.c lib.c shlib.c warnings.c etc.c rrs.c xbits.c md.c
CFLAGS += -I$(.CURDIR) -I$(.CURDIR)/$(MACHINE)

LDADD+=	-lgnumalloc
DPADD+= /usr/lib/libgnumalloc.a

SUBDIR=	ldconfig ldd rtld

.PATH: $(.CURDIR)/$(MACHINE)

.include <bsd.prog.mk>
