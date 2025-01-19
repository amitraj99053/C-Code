#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myName1;
  char myName2;
  char myName3;
  

};

int main() {
  struct myStructure s1;

  s1.myNum = 13;
  s1.myLetter = 'A';
  s1.myName1 = 'M';
  s1.myName2 = 'I';
  s1.myName3 = 'T';
  


  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);
  printf("My Name : %c\n", s1.myName1);
  printf("My Name : %c\n", s1.myName2);
  printf("My Name : %c\n", s1.myName3);



  return 0;
}
