/*  Create a user define function replaceCharacter() that 
replace character from the string.
 String : This book is very easy
 Character : s   replace character : p
 Output : Thip book ip very eapy    */
 
 
 #include <stdio.h>
#include <string.h>

void replaceCharacter(char *str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100] = "This book is very easy";
    char oldChar = 's', newChar = 'p';

    printf("Original String: %s\n", str);

    replaceCharacter(str, oldChar, newChar);

    printf("String after replacement: %s\n", str);

    return 0;
}
