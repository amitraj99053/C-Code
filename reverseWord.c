/*   Write a function reverseWord(char str[]) that takes as an 
argument and reverse it.
 String : I love my India
 Reverse String: India my love I    */
 
 #include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int start = 0, end, len = strlen(str);
    char temp[len + 1]; // Temporary array to store reversed words
    int tempIndex = 0; 

    for (start = 0; start < len; start++) {
        end = start;
        while (end < len && str[end] != ' ') {
            end++;
        }

        // Copy the word to temp array in reverse order
        for (int i = end - 1; i >= start; i--) {
            temp[tempIndex++] = str[i];
        }

        // Add a space after each word (except for the last word)
        if (end < len) {
            temp[tempIndex++] = ' ';
        }

        start = end; // Move to the next word
    }

    // Copy the reversed words back to the original string
    strcpy(str, temp);
}

int main() {
    char str[] = "I love my India";

    printf("Original String: %s\n", str);

    reverseWords(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
