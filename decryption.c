#include "decryption.h"


char decoding (char ch) {

    char tmp = ch ^ gl_key;
    return tmp;
}
