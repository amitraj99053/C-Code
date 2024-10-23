// Write a program to find out the value of x raised to the power y, where x and y are positive integers

#include <stdio.h>
void main()
{
	int base,expo,i;
	int result = 1;
	
	printf("Enter base value : ");
	scanf("%d",&base);
	
	printf("Enter exponent value : ");
	scanf("%d",&expo);
	
	for(i=0; i<expo; i++)
	{
		result *= base;	
	}
	
	printf("%d ^ %d is: %d\n", base,expo,result);
	
	getch();
}
