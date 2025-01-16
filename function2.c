//  calculate sum using function

#include <stdio.h>

void calSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main() {
  calSum(5, 3);
  calSum(8, 2);
  calSum(15, 15);
  return 0;
}
