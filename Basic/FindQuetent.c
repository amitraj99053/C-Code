/* Given two integers say a and b. Find the quotient after 
dividing a by b without using multiplication, division, and 
mod operator.   */

#include <stdio.h>

int divide(int a, int b) {
    int quotient = 0;

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    // negative numbers
    int sign = 1;
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        sign = -1;
    }
    a = abs(a);
    b = abs(b);

    while (a >= b) {
        a -= b;
        quotient++;
    }

    return quotient * sign;
}

int main() {
    int a, b;

    printf("Enter the dividend: ");
    scanf("%d", &a);

    printf("Enter the divisor: ");
    scanf("%d", &b);

    int result = divide(a, b);
    printf("The quotient of %d / %d is %d\n", a, b, result);

    return 0;
}
