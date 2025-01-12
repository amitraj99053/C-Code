/*  Given two numbers A and B. Write a program to count the 
number of bits needed to be flipped to convert A to B. 
Examples: 
Input: A = 10, B = 20, Output: 4
 Explanation: Binary representation of A is 00001010
 Binary representation of B is 00010100
 We need to flip highlighted four bits in A to make it B.
 Input: A = 7, B = 10, Output: 3
 Explanation: Binary representation of A is 00000111
 Binary representation of B is 00001010
 We need to flip highlighted three bits in A to make it B. */




#include <stdio.h>

int countBitsToFlip(int a, int b) {
    int xorResult = a ^ b; // XOR operation to find bits that differ
    int count = 0;

    // Count the number of set bits in the XOR result
    while (xorResult) {
        count += xorResult & 1; // Count the least significant bit
        xorResult >>= 1; // Shift the XOR result to the right
    }

    return count;
}

int main() {
    int a, b;

    printf("Enter the first number (A): ");
    scanf("%d", &a);

    printf("Enter the second number (B): ");
    scanf("%d", &b);

    int flips = countBitsToFlip(a, b);
    printf("Number of bits to flip: %d\n", flips);

    return 0;
}
