.\" Copyright (c) 1988 The Regents of the University of California.
.\" All rights reserved.
.\"
.\" Redistribution and use in source and binary forms, with or without
.\" modification, are permitted provided that the following conditions
.\" are met:
.\" 1. Redistributions of source code must retain the above copyright
.\"    notice, this list of conditions and the following disclaimer.
.\" 2. Redistributions in binary form must reproduce the above copyright
.\"    notice, this list of conditions and the following disclaimer in the
.\"    documentation and/or other materials provided with the distribution.
.\" 3. All advertising materials mentioning features or use of this software
.\"    must display the following acknowledgement:
.\"	This product includes software developed by the University of
.\"	California, Berkeley and its contributors.
.\" 4. Neither the name of the University nor the names of its contributors
.\"    may be used to endorse or promote products derived from this software
.\"    without specific prior written permission.
.\"
.\" THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
.\" ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
.\" IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
.\" ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
.\" FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
.\" DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
.\" OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
.\" HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
.\" LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
.\" OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
.\" SUCH DAMAGE.
.\"
.\"	@(#)0.t	1.6 (Berkeley) 5/7/91
.\"
.nr Th 1		\" Tahoe version
.nr Vx 0
.ds Th Tahoe
.ds Ux \s-1UNIX\s0
.ds Bs \s-1BSD\s0
.\" Current version:
.ds 4B 4.3\*(Bs-tahoe
.\" machine:
.ds Mc \*(Th
.ds mC tahoe
.ds Dk dk
.ds Dn Eagle
.ds Pa c
.ds Ps 4.3\*(Bs-beta
.ds Vs \s-1VERSA\s0bus
.ds Vm "\s-1VME\s0 bus
.de Sm
\s-1\\$1\s0\\$2
..
.bd S B 3
.EH 'SMM:1-%''Installing and Operating \*(4B \*(Ux on the \*(Th'
.OH 'Installing and Operating \*(4B \*(Ux on the \*(Th''SMM:1-%'
.TL
Installing and Operating \*(4B \*(Ux* on the \*(Th
.br
July 14, 1988
.AU
Samuel J. Leffler
.AU
Keith Bostic
.AU
Michael J. Karels
.AU
Marshall Kirk McKusick
.AI
Computer Systems Research Group
Department of Electrical Engineering and Computer Science
University of California, Berkeley
Berkeley, California  94720
(415) 642-7780
.de IR
\\fI\\$1\|\\fP\\$2
..
.de UX
\*(Ux\\$1
..
.AB
.PP
.FS
*\*(Ux is a register trademark of AT&T in the USA and other countries.
.FE
This document contains instructions for the
installation and operation of the
\*(4B release of
.UX
as distributed by The University of California at Berkeley
for the \*(Th (CCI Power 6/32 and similar machines).
.PP
It discusses procedures for installing \*(Ux on a new machine,
and for upgrading an existing 4.2\*(Bs \*(Th \*(Ux system to the new release.
An explanation of how to lay out file systems on available disks,
how to set up terminal lines and user accounts,
and how to do system-specific tailoring is provided.
A description of how to install and configure the networking
facilities included with \*(4B is included.
Finally, the document details system operation procedures:
shutdown and startup,
hardware error reporting and diagnosis, file system backup procedures,
resource control, performance monitoring, and procedures for recompiling
and reinstalling system software.
.AE
