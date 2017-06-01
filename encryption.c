#include "encryption.h"

char gl_key = 0x6;

char coding (string s, int n) {

    char tmp = s[n] ^ gl_key;
    return tmp; 
}






