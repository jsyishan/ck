#include "decryption.h"

int _i = 0;
char _fBuffer[1], _ckey;

char decoding (char ch) {

    *_fBuffer = ch;
    _ckey = s_pop (&key_stack); 
    *_fBuffer ^= _ckey;
    printf ("%c", *_fBuffer);
    _i++;
    return *_fBuffer; 
}
