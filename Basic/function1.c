// function to call many times

#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Amit", 21);
  myFunction("Sachin", 17);
  myFunction("Annu", 18);
  return 0;
}
