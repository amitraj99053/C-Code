// one function to call another function

#include <stdio.h>
 
void myFunction();
void myOtherFunction();
int x=6, y=71;

int main() {
  myFunction();
  return 0;
}


void myFunction() {
  printf("Some text in myFunction\n");
  myOtherFunction();  // call myOtherFunction from myFunction
}


void myOtherFunction() {
  printf("Hey! Some text in myOtherFunction\n");
  printf("Sum of X & Y is : %d\n",x+y);
}
