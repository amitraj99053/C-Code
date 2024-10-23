/* 

*****
  ****
    ***
      **
        *                  
      **
    ***
  ****
*****    right arrow star */

#include <stdio.h>

int main() {
    int i, j, n = 5; // You can change 'n' to control the height of the pattern
    
    // Upper part (inverted pyramid)
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    // Lower part (upright pyramid)
    for (i = 1; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }
        
        // Print stars
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}

