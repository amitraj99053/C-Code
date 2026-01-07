// total surface of area of the cuboid


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

	
	printf("total surface area of cuboid is : %f \n", 2*(l*b+b*h+h*l));
	
	
	return 0;
}
