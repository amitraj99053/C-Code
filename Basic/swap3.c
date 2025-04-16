// Write a program to swap two numbers using third variable, without using third variable, "within single statement using comma operator".

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using a single statement with the comma operator
    (a ^= b), (b ^= a), (a ^= b);

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

