//  Find odd/even number using bitwise operator.

#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter no to Check Odd/Even : ");
	scanf("%d", &num);
	
	// XOR with 1
	if ((num ^ 1) == num - 1) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
	
	getch();
}
