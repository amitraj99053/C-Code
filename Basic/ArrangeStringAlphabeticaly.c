/*   Write program to sort the array of character (String) in 
alphabetical order like STRING in GINRST.   */

#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int len = strlen(str);

    // Bubble Sort
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[] = "STRING";

    printf("Original String: %s\n", str);

    sortString(str);

    printf("Sorted String: %s\n", str);

    return 0;
}
