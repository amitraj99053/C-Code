/*  Write a function reverseWordLetter(char str[]) that takes 
as an argument and reverse it.
 String : I love my India
 Reverse String : I evol ym aidnI    */
 
 #include <stdio.h>
#include <string.h>

void reverseWordLetters(char str[]) {
    int start, end, len = strlen(str);

    for (start = 0; start < len; start++) {
        end = start;
        while (end < len && str[end] != ' ') {
            end++;
        }

        // Reverse letters within the word
        for (int i = start, j = end - 1; i < j; i++, j--) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        start = end; // Move to the next word
    }
}

int main() {
    char str[] = "I love my India";

    printf("Original String: %s\n", str);

    reverseWordLetters(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
