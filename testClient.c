#include "headers.h"

int main () {

    OpenFile("input.txt");
    string s = GetString(gl_fi);
    strcpy(str, s);
    for (int i = 0; i < strlen(s) - 1; i++) {
        push (coding (s, i));
    }

    output(gl_fo);
    return 0;
}
