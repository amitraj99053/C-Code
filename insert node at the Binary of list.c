#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void insert(int data, int position) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;

  if (position == 1) {
    newNode->next = head;
    head = newNode;
    return;
  }

  struct Node* prev = head;
  for (int i = 0; i < position - 2; i++) {
    prev = prev->next;
  }

  newNode->next = prev->next;
  prev->next = newNode;
}

int main() {
  insert(3, 1);
  insert(5, 2);
  insert(7, 1);
  insert(9, 2);

  struct Node* ptr = head;
  while (ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }

  return 0;
}
