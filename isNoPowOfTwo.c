// Find exact power of 2 of a given number using bitwise operator.
                     //OR
//C program to check whether a number is power of 2 or not
/* Numbers that are power of 2:
   2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 ...
   2^2 = 4
   2^5 = 32
   2^10 = 1024 */

#include <stdio.h>

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   //performing bitwise operation
   if((num != 0) && ((num &(num - 1)) == 0))
   {
   	printf("\n%d is a power of 2", num);
   }else {
   	printf("\n%d is not a power of 2\n", num);
   }
      
 return 0;
}
