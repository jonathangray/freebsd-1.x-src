# Makefile
# $Id: Makefile,v 1.1 1994/04/17 21:26:20 csgr Exp $
install: manctl.sh
	install -o ${BINOWN} -g ${BINGRP} -m 555 manctl.sh \
	${DESTDIR}/usr/sbin/manctl

.include <bsd.prog.mk>
