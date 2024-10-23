/* Write a program to receive a five-digit no and display as like 
   1234: 
   4
   3
   2
   1 */

#include <stdio.h>

int main() {
    int num;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    for( ; num; num/=10)
      printf("\n %d",num%10);
    
    return 0;
}

