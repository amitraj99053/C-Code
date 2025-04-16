/*     Write a program to find out the value of x raised to the 
power y, where x and y are positive integers       */

#include <stdio.h>

int isPowerOfTwo(int n) {
    // Base case: 0 is not a power of 2
    if (n == 0) {
        return 0;
    }

    // Check if only one bit is set in the binary representation of n
    return (n & (n - 1)) == 0;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPowerOfTwo(n)) {
        printf("%d is a power of 2\n", n);
    } else {
        printf("%d is not a power of 2\n", n);
    }

    return 0;
}
