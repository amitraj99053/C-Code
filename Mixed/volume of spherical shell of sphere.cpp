//  volume of spherical shell of sphere = 4/3*3.14*(R*R*R-r*r*r)

#include<stdio.h>
#include<conio.h>

int main()

{
	float R,r;
	
	printf("enter value of R : \n");
	scanf("%f", &R);
	
	printf("enter value of r : \n");
	scanf("%f", &r);
	
	printf("volume of spherical shell of sphere is : %f", 4/3*3.14*(R*R*R-r*r*r));
	
	return 0;
	
	
	
}
