#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(int argc, char const *argv[]) {
    st *s = malloc(sizeof(st));
    createEmptyStack(s);
    printf("%d\n", s->top);
    
    return 0;
}