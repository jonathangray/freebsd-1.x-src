# Makefile
# $Id: Makefile,v 1.2 1994/04/19 06:43:36 csgr Exp $

all: manctl.sh
	/bin/cp ${.CURDIR}/manctl.sh manctl

install: all
	install -o ${BINOWN} -g ${BINGRP} -m 555 manctl \
	${DESTDIR}/usr/sbin/manctl

.include <bsd.prog.mk>
