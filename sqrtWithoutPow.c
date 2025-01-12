/*     Given an integer n, calculate the square of a number 
without using *, / and pow(). 
Input: n = 5,Output: 25       */

#include <stdio.h>

int square(int n) {
    if (n == 0) {
        return 0;
    }

    int result = 0;
    int i;
    for (i = 1; i <= n; i++) {
        result += 2 * i - 1; // Add consecutive odd numbers
    }

    return result;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int squared_n = square(n);
    printf("Square of %d is: %d\n", n, squared_n);

    return 0;
}
