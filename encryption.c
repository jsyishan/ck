#include "encryption.h"

char *gl_key;

int gl_keylen;
int i = 0;
char fBuffer[1], ckey;


void setKey (char* cp) {

    gl_key = cp;
    gl_keylen = strlen (cp);
}

char coding (string s, int n) {

    ckey = gl_key[i % gl_keylen];
    s_push (&key_stack, ckey);
    *fBuffer = s[n];
    // printf ("%c\t", *fBuffer);
    // printf ("%c\t", ckey);
    *fBuffer ^= ckey;
    printf ("%c", *fBuffer);
    i++;
    return *fBuffer; 
}