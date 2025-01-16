//  pointer variable to get variable memory address

#include <stdio.h>

int main() {
  int myAge = 43;  
  int* ptr = &myAge;  // pointer variable store the address of myAge

  // Output myAge (43)
  printf("%d\n", myAge);

  // Output memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  return 0;
}
