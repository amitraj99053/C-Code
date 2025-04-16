#include <stdio.h>

// Global variable
int x = 5;

void myFunction() {
  printf("%d\n", ++x);  // x = 6
}

int main() {
  myFunction();

  printf("%d\n", x); // x = 6
  return 0;
}
