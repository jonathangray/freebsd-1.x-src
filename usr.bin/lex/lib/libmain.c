/* libmain - flex run-time support library "main" function */

/* $Header: /a/cvs/386BSD/src/usr.bin/lex/lib/libmain.c,v 1.1 1993/06/12 14:50:50 rgrimes Exp $ */

extern int yylex();

int main( argc, argv )
int argc;
char *argv[];

    {
    return yylex();
    }
