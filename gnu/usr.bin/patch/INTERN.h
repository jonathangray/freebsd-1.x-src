/* $Header: /a/cvs/386BSD/src/gnu/usr.bin/patch/INTERN.h,v 1.1 1993/06/19 14:21:51 paul Exp $
 *
 * $Log: INTERN.h,v $
 * Revision 1.1  1993/06/19 14:21:51  paul
 * Initial revision
 *
 * Revision 2.0  86/09/17  15:35:58  lwall
 * Baseline for netwide release.
 * 
 */

#ifdef EXT
#undef EXT
#endif
#define EXT

#ifdef INIT
#undef INIT
#endif
#define INIT(x) = x

#define DOINIT
