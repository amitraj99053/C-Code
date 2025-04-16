//  Find odd/even number using bitwise operator.

#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter no to Check Odd/Even : ");
	scanf("%d", &num);
	
	// AND Operator
	if(num & 1){
		printf("Odd no");
	}else
	{
		printf("Even no");
	}
	
	getch();
}
