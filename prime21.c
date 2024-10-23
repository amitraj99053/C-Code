#include<stdio.h>
void main()
{
    int i,n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
       printf("\n not a prime number");
       break;
      }
      else
      {
      printf("\n prime number");
      break;
      }
    }
 getch();
}
