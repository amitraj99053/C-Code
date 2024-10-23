// Write a C program to print the of the Fibonacci series of n numbers
// trick 1
#include <stdio.h>

int main()
{
    int a, b, c, i, terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

   
    for(i=1; i<=terms; i++)
    {
        
        a = b;     
        b = c;     
        c = a + b; 
        printf("%d, ", c);
    }

    return 0;
}
