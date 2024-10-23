//  Find odd/even number using bitwise operator.

#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter no to Check Odd/Even : ");
	scanf("%d", &num);
	
	// Right shift and multiply back
	if ((num >> 1) << 1 == num) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
	
	getch();
}
