/*  Given two integers say a and b. Find the quotient after 
dividing a by b without using multiplication, division, and 
mod operator.
 Example: 
Input: a = 10, b = 3, Output: 3
 Input : a = 43, b = -8, Output :  -5   */


#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) {
        return 0; // Division by zero is undefined
    }

    int sign = 1;
    if (a < 0) {
        sign = -sign;
        a = -a;
    }
    if (b < 0) {
        sign = -sign;
        b = -b;
    }

    int quotient = 0;
    int temp = b;

    while (temp <= a) {
        temp <<= 1; // Double 'temp' in each iteration
    }

    temp >>= 1; // Adjust 'temp' back to the largest power of 2 less than or equal to 'a'

    while (temp != 0) {
        if (a >= temp) {
            a -= temp;
            quotient += temp / b; // Calculate the contribution to quotient
        }
        temp >>= 1;
    }

    return sign * quotient;
}

int main() {
    int a, b;

    printf("Enter the dividend (a): ");
    scanf("%d", &a);

    printf("Enter the divisor (b): ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    int result = divide(a, b);
    printf("Quotient: %d\n", result);

    return 0;
}
