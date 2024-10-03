//  Write a program to swap two numbers using bitwise operator.


#include <stdio.h>

int main() {
    int a, b;

  
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using bitwise XOR
       // if a = 5 (binary= 0101)
       // if b = 3 (binary= 0011)
    
    a = a ^ b; 
    b = a ^ b;
    a = a ^ b;
      // a = 0101 ^ 0011 = 0110(6)
	  // b = 0110 ^ 0011 = 0101(5)
	  // a = 0110 ^ 0101 = 0011(3)

    
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

