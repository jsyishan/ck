#ifndef _FILEHANDLER_H
#define _FILEHANDLER_H
#include "headers.h"


// void push (char ch);
// char pop ();
int OpenFile (char *name);
string GetString (FILE *FileName);
int input(FILE *FileName);
int output (FILE *FileName);

extern FILE *gl_fi;
extern FILE *gl_fo;

// extern int gl_top;
// extern char gl_str[N];
#endif
