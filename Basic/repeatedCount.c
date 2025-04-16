/*     Print all the duplicate characters in a string
Given a string S, the task is to print all the duplicate
characters with their occurrences in the given string.
Example:  Input: S = “goodorgood”
Output:
d, count = 2
g, count = 2
o, count = 5
r, count = 1    */


#include <stdio.h>
#include <string.h>

void printDuplicates(char str[]) {
    int count[256] = {0}; // Array to store character frequencies
    int len = strlen(str);

    // Count occurrences of each character
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }

    // Print duplicate characters
    printf("Duplicate characters:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            printf("%c, count = %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[] = "goodorgood";

    printDuplicates(str);

    return 0;
}
