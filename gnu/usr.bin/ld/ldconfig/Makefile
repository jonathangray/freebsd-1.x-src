#	$Id: Makefile,v 1.2 1993/11/06 23:15:53 paul Exp $

PROG=	ldconfig
SRCS=	ldconfig.c shlib.c etc.c
LDDIR?= $(.CURDIR)/..
LDFLAGS += -static
CFLAGS += -I$(LDDIR) -I$(.CURDIR) -I$(LDDIR)/$(MACHINE) -O
BINDIR= ${DESTDIR}/sbin
MAN8 = ldconfig.8

.PATH: $(LDDIR) $(LDDIR)/$(MACHINE)

.include <bsd.prog.mk>
