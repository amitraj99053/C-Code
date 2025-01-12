#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node* next;
};
// Function to create a new node with given data
struct Node* newNode(int data) {
 struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 new_node->data = data;
 new_node->next = NULL;
 return new_node;
}
// Function to insert a new node at the end of the list
void append(struct Node** head_ref, int new_data) {
 // Allocate memory for the new node
 struct Node* new_node = newNode(new_data);
 struct Node* last = *head_ref;
 // If the linked list is empty, then make the new node as the head
 if (*head_ref == NULL) {
 *head_ref = new_node;
 return;
 }
 // Traverse to the last node of the list
 while (last->next != NULL) {
 last = last->next;
 }
 // Insert the new node at the end of the list
 last->next = new_node;
}
// Function to print the linked list
void printList(struct Node* node) {
 while (node != NULL) {
 printf(" %d ", node->data);
 node = node->next;
 }
}
int main() {
 struct Node* head = NULL;
 // Append some values to the list
 append(&head, 6);
 append(&head, 7);
 append(&head, 8);
 append(&head, 9);
 // Print the list
 printList(head);
 return 0;
}
