/*    Write a program to find the sum of digits of a 5 digit 
number using recursion.   */


#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main() {
    int number, sum;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    sum = sumOfDigits(number);

    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
