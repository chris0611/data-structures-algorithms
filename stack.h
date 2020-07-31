#ifndef STACK_H
#define STACK_H

#define MAX 1024

struct stack{
    int items[MAX];
    int top;
};
typedef struct stack st;

void push(st *s, int new);
void pop(st *s);
int isfull(st *s);
int isempty(st *s);
void createEmptyStack(st *s);
void printStack(st *s);
#endif