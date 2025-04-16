// Given an integer n, calculate the square of a number without using *, / and pow().

#include <stdio.h>

int square(int n) {
    int result = 0, i = 1;

    while (i <= n) {
        result += n;
        i++;
    }

    return result;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = square(n);
    printf("The square of %d is %d\n", n, result);

    return 0;
}
