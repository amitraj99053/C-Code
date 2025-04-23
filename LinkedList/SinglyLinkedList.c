// Singly Linked List to create, insert, delete and print.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode; // New head
}

struct Node* delete(struct Node* head, int key) {
    struct Node* current = head;
    struct Node* prev = NULL;

    // If the key is at the head
    if (current != NULL && current->data == key) {
        head = current->next;
        free(current);
        return head;
    }

    // Search for the key
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If key was not found
    if (current == NULL) {
        printf("%d not found in the list.\n", key);
        return head;
    }

    // Unlink the node
    prev->next = current->next;
    free(current);
    return head;
}

// print the list
void print(struct Node* head) {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, num, del_num;

    do {
        printf("\nSimple Linked List Operations:\n");
        printf("1. Insert a number\n");
        printf("2. Delete a number\n");
        printf("3. Print the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number to insert: ");
                scanf("%d", &num);
                head = insert(head, num);
                break;
            case 2:
                printf("Enter number to delete: ");
                scanf("%d", &del_num);
                head = delete(head, del_num);
                break;
            case 3:
                print(head);
                break;
            case 4:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    // Free memory (important!)
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL; // Good practice to set head to NULL after freeing
    return 0;
}