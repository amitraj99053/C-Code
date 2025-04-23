#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a node in the linked list
struct Node {
    char name[50];
    struct Node* next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head, char newName[50]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newNode->name, newName);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, char newName[50]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newNode->name, newName);
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to delete a node with a given name
void deleteNode(struct Node** head, char nameToDelete[50]) {
    if (*head == NULL) {
        return; // List is empty
    }

    struct Node* current = *head;
    struct Node* previous = NULL;

    if (strcmp(current->name, nameToDelete) == 0) {
        // Node to delete is the head node
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && strcmp(current->name, nameToDelete) != 0) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with name '%s' not found\n", nameToDelete);
        return; // Node not found
    }

    previous->next = current->next;
    free(current);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%s -> ", current->name);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    char name[50];
    int choice;

    do {
        printf("\nSingly Linked List Menu\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete node\n");
        printf("4. Print list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter name to insert at the beginning: ");
                scanf("%s", name);
                insertAtBeginning(&head, name);
                break;
            case 2:
                printf("Enter name to insert at the end: ");
                scanf("%s", name);
                insertAtEnd(&head, name);
                break;
            case 3:
                printf("Enter name to delete: ");
                scanf("%s", name);
                deleteNode(&head, name);
                break;
            case 4:
                printf("Current List: ");
                printList(head);
                break;
            case 0:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    // Free the memory used by the linked list before exiting
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL; // Set head to NULL after freeing all nodes

    return 0;
}
