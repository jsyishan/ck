#include "fileHandler.h"


FILE *gl_fi, *gl_fo;
int top = 0;
char str[N];

void push (char ch) {

    str[top++] = ch;
}

char pop () {

    return str[--top];
}

int OpenFile (char *name) {
    
    if ((gl_fi = fopen (name, "r")) == NULL) {
        return 0;
    }
    return 1;
}

string GetString (FILE *FileName) {

    char ch;
    string s;
    char cs[N];
    int i = 0;

    while ((ch = getc (FileName)) != EOF) {

        cs[i] = ch;
        i++;
    }
    cs[i] = '\0';
    s = cs;
    return s;
}

int output (FILE *FileName) {

    char ch;

    if ((FileName = fopen ("output.txt", "w")) == NULL) {
       return 1;
    }

    while (top != 0) {

        ch = pop();
        putc (ch, FileName);
    }

    putc ('\n', FileName);
    return 0;
}
