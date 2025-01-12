/*  LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS
 Given a string s, find the length of 
the longest substring without repeating characters.
 Example 1:
 Input: s = "abcabcbb",Output: 3
 Explanation: The answer is "abc", with the length of 3.
 Example 2:
 Input: s = "bbbbb",Output: 1
 Explanation: The answer is "b", with the length of 1.
 Example 3:
 Input: s = "pwwkew",Output: 3
 Explanation: The answer is "wke", with the length of 3.
 Notice that the answer must be a substring, "pwke" is a 
subsequence and not a substring.               */


#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int charIndex[256]; // Array to store the last index of each character
    int maxLength = 0;
    int start = 0;

    // Initialize all indices to -1
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (charIndex[(int)s[i]] >= start) {
            start = charIndex[(int)s[i]] + 1; // Update the start of the substring
        }
        charIndex[(int)s[i]] = i; // Update the index of the current character
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength; // Update the maximum length
        }
    }

    return maxLength;
}

int main() {
    char s1[] = "abcabcbb";
    char s2[] = "bbbbb";
    char s3[] = "pwwkew";

    printf("Input: \"%s\", Output: %d\n", s1, lengthOfLongestSubstring(s1));
    printf("Input: \"%s\", Output: %d\n", s2, lengthOfLongestSubstring(s2));
    printf("Input: \"%s\", Output: %d\n", s3, lengthOfLongestSubstring(s3));

    return 0;
}

