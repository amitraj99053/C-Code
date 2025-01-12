/*  Write a program to remove all the blank space from the 
string & print it, also count the no of characters. */

#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets for safer input

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);

    int len = strlen(str);
    printf("Number of characters: %d\n", len);

    return 0;
}
