//  Write a program to find odd/even number using ternary operator

#include <stdio.h>

int main() {
    int num;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    // ternary operator
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);

    return 0;
}

