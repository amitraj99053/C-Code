// swap the values

#include <stdio.h>
void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
	
}

void main()
{
	int a = 5, b = 7;  // output a=7 , b=5
	swap(&a,&b);
	printf("\na = %d",a);
	printf("\nb = %d",b);
	getch();
}

