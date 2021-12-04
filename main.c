#include "stack.h"

#include <stdio.h>

int main() {
    // Example code
    Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    printStack(stack);

    return 0;
}