/*  Permutations of given String
 Given a string S, the task is to write a program to print 
all permutations of a given string. 
A permutation also called an “arrangement number” 
or “order,” is a rearrangement of the elements of an 
ordered list S into a one-to-one correspondence with S 
itself. A string of length N has N! permutations. 
Examples:

 Input: S = “ABC”
 Output: “ABC”, “ACB”, “BAC”, “BCA”, “CBA”, “CAB”
 Input: S = “XY”
 Output: “XY”, “YX”       */


#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* str, int l, int r) {
    if (l == r)
        printf("%s\n", str);
    else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}
