#include "node.h"

#include "stdbool.h"

typedef struct Stack {
    Node* top;
} Stack;

/**
 * @brief Create a Stack object
 * 
 * @return Stack* 
 */
Stack* createStack();

/**
 * @brief Tests if this Stack is empty
 * 
 * @param stack 
 * @return true 
 * @return false 
 */
bool isEmpty(Stack* stack);

/**
 * @brief Pushes an item onto the top of this Stack
 * 
 * @param stack 
 * @param x 
 * @return Node* 
 */
Node* push(Stack* stack, int x);

/**
 * @brief Removes the object at the top of this Stack and returns that object as the value of this function
 * 
 * @param stack 
 * @return Node* 
 */
Node* pop(Stack* stack);

/**
 * @brief Looks at the object at the top of this Stack without removing it from the Stack
 * 
 * @param stack 
 * @return Node* 
 */
Node* peek(Stack* stack);

/**
 * @brief Print the Stack object
 * 
 * @param stack 
 */
void printStack(Stack* stack);