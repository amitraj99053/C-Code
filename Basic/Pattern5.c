/* 
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************      */

#include <stdio.h>

int main() {
    int i, j, n = 10; 
    
    // Upper part of the hourglass
    for (i = 0; i < n; i++) {
        // Print left stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        
        // Print spaces in between
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        
        // Print right stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }
    
    // Lower part of the hourglass
    for (i = 1; i <= n; i++) {
        // Print left stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        
        // Print spaces in between
        for (j = 0; j < 2 * (n - i); j++) {
            printf(" ");
        }
        
        // Print right stars
        for (j = 0; j < i; j++) {
            printf("*");
        }
        
        printf("\n"); // Move to the next line
    }
    
    return 0;
}

