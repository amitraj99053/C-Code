/*     Naive algorithm for Pattern Searching
 Given text string with length n and a pattern with length m, 
the task is to prints all occurrences of pattern in text.
 Note: You may assume that n > m.
 Examples: 
Input:  text = “THIS IS A TEST TEXT”, pattern = “TEST”
 Output: Pattern found at index 10
 Input:  text =  “AABAACAADAABAABA”, pattern = 
“AABA”
 Output: Pattern found at index 0, Pattern found at index 9, 
Pattern found at index 12         */



#include <stdio.h>
#include <string.h>

void naivePatternSearch(char* txt, char* pat) {
    int n = strlen(txt);
    int m = strlen(pat);

    // Iterate through text
    for (int i = 0; i <= n - m; i++) {
        int j;

        // Compare pattern with text character by character
        for (j = 0; j < m; j++) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If pattern is found
        if (j == m) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char txt[100], pat[50];

    printf("Enter text: ");
    scanf("%s", txt);

    printf("Enter pattern: ");
    scanf("%s", pat);

    naivePatternSearch(txt, pat);

    return 0;
}
