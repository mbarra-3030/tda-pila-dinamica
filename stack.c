#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

Stack* createStack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

bool isEmpty(Stack* stack) {
    if (stack->top == NULL) return true;
    return false;
}

Node* push(Stack* stack, int x) {
    Node* node = createNode(x);
    if (isEmpty(stack)) {
        stack->top = node;
        return NULL;
    } else {
        Node* aux = stack->top;
        stack->top = node;
        node->next = aux;
        return node;
    }
}

Node* pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Couldn't pop because Stack is empty.\n");
        return NULL;
    } else {
        Node* aux = stack->top;
        Node* e = peek(stack);
        stack->top = aux->next;
        aux->next = NULL;
        free(aux);
        return e;
    }
}

Node* peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Couldn't peek because Stack is empty.\n");
        return NULL;
    } else {
        return stack->top;
    }
}

void printStack(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Couldn't print the Stack because is empty.\n");
    } else {
        Node* current = stack->top;
        while (current) {
            printf("data: %d\n", current->data);
            current = current->next;
        }
    }
}