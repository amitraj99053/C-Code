#include <stdio.h>

// Global variable x
int x = 5;

void myFunction() {
  
  int x = 22;
  printf("%d\n", x); // local variable x = 
}

int main() {
  myFunction();

  printf("%d\n", x); // global variable x = 
  return 0;
}
