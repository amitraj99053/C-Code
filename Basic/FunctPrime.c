// check prime no using function

#include <stdio.h>
int isPrime(int x)
{
	int i,f = 1;
	if(x<2)
	  return 0;
	
	for(i=2; i<=x/2; i++)
	{
		if(x%i==0)
		{
			f=0;
			break;
		}
	}
	return f;
}

void main()
{
	int x;
	printf("Enter no to check prime no : ");
	scanf("%d",&x);
	if(isPrime(x))
	  printf("\nYes, It's Prime ");
	else
	  printf("\nNo, It's Not a Prime ");
	  
	getch();  

}
