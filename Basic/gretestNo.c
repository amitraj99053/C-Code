//  Write a program to input two numbers and find the greatest number using ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, greatest;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //  ternary operator
    greatest = (num1 > num2) ? num1 : num2;

    
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

