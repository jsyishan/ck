#include "stack.h"


stack data_stack;
stack key_stack;

void s_init (stack *s) {

    s->base = (char*) malloc (sizeof(char) * STACK_SIZE);
    if (s->base == NULL) {
        printf ("malloc error");
        exit (-1);
    }

    s->top = s->base;
}

void s_push (stack *s, char ch) {

    *s->top++ = ch;
}

char s_pop (stack *s) {

    if (s->base == s->top) {
        exit (-1);
    }

    return *--s->top;
}

int s_isEmpty (stack *s) {

    if (s->base == s->top) {
        return 1;
    }

    return 0;
}


