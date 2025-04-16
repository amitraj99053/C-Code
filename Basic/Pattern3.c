/* 
      *
    *   * 
  *   *   *
*   *   *   *      */

#include <stdio.h>

int main() {
    int i, j, k, rows = 4; 
    
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf("  ");
        }
        
		        for (k = 1; k <= i; k++) {
            printf("* ");
            if (k != i) {
                printf("  "); // extra space between asterisks
            }
        }
        
        printf("\n");
    }
    
    return 0;
}

