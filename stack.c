#include <stdio.h>
#include "stack.h"

int count = 0;

void push(st *s, int new);
void pop(st *s);
int isfull(st *s);
int isempty(st *s);
void createEmptyStack(st *s);
void printStack(st *s);
/*
int main(int argc, char const *argv[]) {
    int ch;
    st *s = malloc(sizeof(st));
    
    createEmptyStack(s);
    
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    
    printStack(s);
    
    pop(s);
    
    printf("After popping out\n");
    printStack(s);
    
    return 0;
}
*/
void createEmptyStack(st *s) {
    s->top = -1;
}

int isfull(st *s) {
    if (s->top == MAX -1)
        return 1;
    else
        return 0;
}

int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void push(st *s, int newitem) {
    if (isfull(s)) {
        printf("STACK FULL\n");
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
    count++;
}

void pop(st *s) {
    if (isempty(s)) {
        printf("STACK EMPTY\n");
    } else {
        printf("Item popped = %d\n", s->items[s->top]);
        s->top--;
    }
    count--;
}

void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}