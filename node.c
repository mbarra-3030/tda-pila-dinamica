#include "node.h"

#include <stdlib.h>

Node* createNode(int x) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = x;
    node->next = NULL;
    return node;
}