//   volume of the cone = 1/3*3.14*r*r*h

#include<stdio.h>


int main()

{
	float r,h;
	
	printf("enter value of r : \n" );
	scanf("%f", &r);
	
	printf("enter value of h : \n ");
	scanf("%f", &h);
	
	printf("volume of the cone is : %f  \n", 1/3*3.14*r*r*h );
	
	return 0;
	
	
	
	
}
