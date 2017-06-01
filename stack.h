#ifndef _STACK_H
#define _STACK_H

#include "headers.h"
#define STACK_SIZE 100

typedef struct {
    char *base;
    char *top;
} stack;


void s_init (stack *s);
void s_push (stack *s, char ch);
char s_pop (stack *s);
int s_isEmpty (stack *s);

extern stack data_stack;
extern stack key_stack;
#endif