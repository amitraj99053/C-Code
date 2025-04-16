#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE], top = -1;
void push(int x) {
 if (top == MAX_SIZE-1) {
 printf("Error: Stack overflow\n");
 return;
 }
 stack[++top] = x;
 printf("%d pushed to stack\n", x);
}
void pop() {
 if (top == -1) {
 printf("Error: Stack underflow\n");
 return;
 }
 printf("%d popped from stack\n", stack[top--]);
}
int main() {
 push(1);
 push(2);
 push(3);
 pop();
 pop();
 pop();
 pop();
 return 0;
}
