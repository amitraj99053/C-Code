// function cos x = x^0/0! - x^2/2! + x^4/4! - x^6/6!....

#include <stdio.h>
int myPow(int x, int y)
{
	float p=1;
	while(y)
	{
		p*=x;
		y--;
	}
	return p;
}

int fact(int x)
{
	int p=1;
	while(x)
	{
		p*=x;
		x--;
	}
	return p;
}

void main()
{
	int i,z=1;
	float res = 0,x;
	
	printf("Enter x : ");
	scanf("%f",&x);
	 
	for (i=0; i<=6; i+=2)
	{
		res += (myPow(x,i)/fact(i))*2;
		z =z*(-1);
	} 
	printf("\nresult = %f",res);
	getch();
}
