/*    Given a string containing digits from 2-9 inclusive, return 
all possible letter combinations that the number could 
represent. Return the answer in any order.
 A mapping of digits to letters (just like on the telephone 
buttons) is given below. Note that 1 does not map to any 
letters.
 Example 1:
 Input: digits = "23"
 Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
 Example 2:
 Input: digits = ""
 Output: []
 Example 3:
 Input: digits = "2"
 Output: ["a","b","c"]         */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* letterMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void backtrack(char** output, int* outputCol, char* digits, int digitIndex, char* combination) {
    if (digitIndex == strlen(digits)) {
        output[*outputCol] = malloc((strlen(combination) + 1) * sizeof(char));
        strcpy(output[*outputCol], combination);
        (*outputCol)++;
        return;
    }

    char* letters = letterMap[digits[digitIndex] - '0'];
    for (int i = 0; letters[i]; i++) {
        combination[digitIndex] = letters[i];
        backtrack(output, outputCol, digits, digitIndex + 1, combination);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    if (strlen(digits) == 0) {
        *returnSize = 0;
        return NULL;
    }

    char** output = (char**)malloc(10000 * sizeof(char*)); // Adjust this size as needed
    *returnSize = 0;
    char combination[10]; // Adjust this size based on maximum input length

    backtrack(output, returnSize, digits, 0, combination);
    return output;
}

int main() {
    char digits[10];

    printf("Enter digits: ");
    scanf("%s", digits);

    int returnSize;
    char** combinations = letterCombinations(digits, &returnSize);

    printf("Possible letter combinations:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%s\n", combinations[i]);
        free(combinations[i]); // Free allocated memory
    }
    free(combinations);

    return 0;
}
