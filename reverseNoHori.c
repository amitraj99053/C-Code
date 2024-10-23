/*   Write a program to receive a five-digit no and display as like 
24689: 
9
8
6
4
2    */


#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d:\n", num);

    while (num > 0) {
        digit = num % 10;
        printf("%d\n", digit);
        num /= 10;
    }

    return 0;
}
