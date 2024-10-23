// Write a C program to print the of the Fibonacci series of n numbers
// trick 2
#include<stdio.h>
void main()
{
   int i,n,a,b,sum;
   printf("\n enter number : ");
   scanf("%d",&n);
   
    if(n<1)
   {
        printf("invalid input");
    }
    for(i=1;i<=n;i++)
    {
        sum = a+b;
        printf("\n %d",sum);
        a=b;
        b=sum;
    }
    getch();
}
