// area of four walls of a room = 2*(l+b)*h


#include<stdio.h>

int main()
{
	float l,b,h;
	
	printf("enter value of l \n");
	scanf("%f", &l);
	
	
	printf("enter value of b \n");
	scanf("%f", &b);
	
	
	printf("enter value of h \n");
	scanf("%f", &h);

	
	printf("area of four walls of a room is : %f \n", 2*(l+b)*h);
	
	
	return 0;
}
