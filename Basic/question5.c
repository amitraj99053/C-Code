#include<stdio.h>

int main()
{
	char *p = 0;
	
    *p = 'A';
    printf("Value at p = %c\n", *p);
    // core dumped
}
