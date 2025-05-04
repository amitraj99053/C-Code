// Creation of New Node using Function in C
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  
    int data;

    struct Node *next;
} Node;

// A function that creates a new node and returns the pointer to it
Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = NULL;
    
    return newNode;
}

int main() {
  
    // 10 -> NULL
    Node *first = createNode(10);
  
    // 10 -> 20 -> NULL
    first->next = createNode(20);
  
    // 10 -> 20 -> 30 -> NULL
    first->next->next = createNode(30);

    printf("Linked List: ");
    Node *temp = first;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}