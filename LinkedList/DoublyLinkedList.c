// Forward Traversal (Iterative) of Doubly Linked List

#include <stdio.h>

// Definition of a Node in a doubly linked list
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

// Function to traverse the doubly linked list in forward direction
void forwardTraversal(struct Node* head) {
    struct Node* curr = head;

    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct Node* createNode(int val) {
    struct Node* newNode = 
		      (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

int main() {
  
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    printf("Forward Traversal: ");
    forwardTraversal(head);

    return 0;
}