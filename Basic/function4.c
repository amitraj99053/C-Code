//  returns the sum of a function with two parameters

#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d\n", myFunction(5, 3));
  printf("Result is: %d\n", myFunction(75, 53));
  printf("Result is: %d\n", myFunction(588, 35));
  printf("Result is: %d\n", myFunction(63, 562));
  printf("Result is: %d\n", myFunction(9, 8));
  return 0;
}
