/* 
    *****
   ****
  ***
 **
*                  
 **
  ***
   ****
    *****    left arrow star
*/


#include <stdio.h>

int main() {
    int i, j, n=5;

    // Print upper part of the arrow
    for (i = 1; i < n; i++) {
        // Print trailing (n - row number) spaces
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        // Print inverted right triangle
        for (j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print bottom part of the arrow
    for (i = 1; i <= n; i++) {
        // Print trailing (row number - 1) spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print the right triangle
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


