#include <stdio.h>

int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n;

    printf("power of 2 or not\n");    
	n = 4;
    printf("Input: n = %d, Output: %s\n", n, isPowerOfTwo(n) ? "Yes" : "No");

    n = 42;
    printf("Input: n = %d, Output: %s\n", n, isPowerOfTwo(n) ? "Yes" : "No");

    n = 1;
    printf("Input: n = %d, Output: %s\n", n, isPowerOfTwo(n) ? "Yes" : "No");

    return 0;
}

