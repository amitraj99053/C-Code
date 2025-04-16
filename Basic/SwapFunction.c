// swap function "not" work because of no function call

#include <stdio.h>
void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
}

void main()
{
	int a=5, b=7;
	swap(a,b);
	printf("\nNow a = %d ", a);
	printf("\nNow b = %d ", b);
	
	getch();
}
