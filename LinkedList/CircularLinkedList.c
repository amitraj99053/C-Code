#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node NODE;
NODE *start = NULL;
NODE *last = NULL;

void Create() {
    NODE *ptr;
    ptr = (NODE *) malloc (sizeof(NODE));
    if (ptr == NULL) {
        printf("\n Memory is not allocated");
        exit(1); 
    }

    printf("\n Enter the value of a node: ");
    scanf("%d", &ptr -> data);

    if (start == NULL) {
        ptr -> next = ptr;
        start = last = ptr;
    } else {
        ptr -> next = start;
        start = ptr;
        last -> next = start;
    }
}

void Display() {
    if (start == NULL) {
        printf("\n Circular Linked List is empty.");
        return;
    }

    NODE *current = start;
    printf("\n Circular Linked List elements: ");
    do {
        printf("%d ", current -> data);
        current = current -> next;
    } while (current != start);
    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\n Circular Linked List Operations:");
        printf("\n 1. Create a node");
        printf("\n 2. Display the list");
        printf("\n 3. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Create();
                break;
            case 2:
                Display();
                break;
            case 3:
                printf("\n Exiting program.\n");
                break;
            default:
                printf("\n Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}