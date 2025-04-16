// print Fibonacci sequence till 1000

#include <stdio.h>
#include <math.h>

int main()
{
   int n,i,flag;
   
   for(n=2; n<=1000; n++)
   {
    flag=0;
    
    for(i =2; i <=n/2; i++)
    { 
     if(n%i==0)
     {
      flag=1;
      break;
     }
    }
   
    if(flag==0)
     printf("\n%d",n);
    
   }
   
 return 0;
}
