#include <stdio.h>
#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue(int x) {
 if (rear == MAX_SIZE - 1) {
 printf("Error: Queue overflow\n");
 return;
 }
 if (front == -1 && rear == -1) {
 front = rear = 0;
 } else {
 rear++;
 }
 queue[rear] = x;
 printf("%d enqueued to queue\n", x);
}
void dequeue() {
 if (front == -1 || front > rear) {
 printf("Error: Queue underflow\n");
 return;
 }
 printf("%d dequeued from queue\n", queue[front]);
 front++;
}
int main() {
 enqueue(1);
 enqueue(2);
 enqueue(3);
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 return 0;
}
