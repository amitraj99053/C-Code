/*  
        *
       ** 
      * *
     *  *
    *   *
   *    *
  *     *
 *      *
*********    */

#include <stdio.h>

int main() {
    int i, j, rows = 9; 
    
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        
        // Print asterisks for the first and last position in the row, or a full row of asterisks at the last row
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n"); 
    }
    
    return 0;
}

