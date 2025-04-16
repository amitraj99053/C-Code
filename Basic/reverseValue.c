/*   Write a function reverseStr(char str[]) that takes as 
argument and reverse it.
 String   :-  amit kumar
 Reverse String :- ramuk tima  */
 
 #include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100] = "amit kumar";

    printf("Original String: %s\n", str);

    reverseStr(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
