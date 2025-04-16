/* Write a function which delete all the repeated occurrences 
of a character from a string.
 String : This book is very easy
 Output : This bok  very a    */
 
 
 #include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                // Shift all characters after j one position left
                for (int k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
                j--; // Decrement j to check the character that moved into position j
            }
        }
    }
}

int main() {
    char str[] = "This book is very easy";

    printf("Original String: %s\n", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
