#ifndef _ENCRYPTION_H
#define _ENCRYPTION_H
#include "headers.h"

void setKey (char* cp);
char coding(string s, int n);

extern char *gl_key;
extern int gl_keylen;
#endif
