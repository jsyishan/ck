#include "fileHandler.h"


FILE *gl_fi, *gl_fo;

// int gl_top = 0;
// char gl_str[N];


// void push (char ch) {

//     gl_str[gl_top++] = ch;
// }

// char pop () {

//     return gl_str[--gl_top];
// }

int OpenFile (char *name) {
    
    if ((gl_fi = fopen (name, "rb")) == NULL) {
        return 0;
    }

    s_init (&data_stack);
    s_init (&key_stack);
    return 1;
}

string GetString (FILE *FileName) {

    char ch;
    string s;
    char cs[N];
    int i = 0;

    printf ("读取到的数据：");
    while ((ch = getc (FileName)) != EOF) {

        cs[i] = ch;
        i++;
    }
    cs[i] = '\0';
    s = cs;
    printf ("%s\n", s);
    return s;
}

int input (FILE *FileName) {

    string s = GetString(FileName);
    if (s == NULL) {
        return 0;
    }

    printf ("加密后的数据:");
    for (int i = 0; i < strlen(s); i++) {
        s_push (&data_stack, coding(s, i));
        //printf ("%c", s_pop (&data_stack));
        //push (coding (s, i));
    }
    printf ("\n");
    return 1;
}

int output (FILE *FileName) {

    char ch;

    if ((FileName = fopen ("output.txt", "wb")) == NULL) {
       return 1;
    }

    printf ("解密后的数据(栈结构pop出数据因此数据与原来相比前后颠倒):");
    while (!s_isEmpty(&data_stack)) {

        ch = s_pop (&data_stack);
        // printf ("%c", s_pop (&data_stack));
        //ch = pop();
        putc (decoding(ch), FileName);
    }
    printf("\n");

    return 0;
}
