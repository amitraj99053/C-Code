// Find exact power of 2 of a given number using bitwise operator.

#include<stdio.h>
#include<math.h>

int main()
{
  int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is an exact power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    getch ();
}
