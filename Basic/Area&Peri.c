//  Write a program to Calculate Area and Perimeter of a Circle
//  Area of circle = pi*r*r  ||  Perimeter of circle = 2*pi*r

#include <stdio.h>

int main()
{
	float Area,Perimeter,r;
	
	printf("Enter Radius : ");
	scanf("%f",&r);
	
	Area = 3.14*r*r;
	Perimeter = 2*3.14*r;
	
	printf("Area of circle : %.2f",Area);
	printf("\nPerimeter of circle : %.2f",Perimeter);
	
	return 0;
	
}
