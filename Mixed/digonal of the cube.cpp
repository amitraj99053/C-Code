// digonal of the cuboid = pow((l*l)+(b*b)+(h*h),1.0/2)


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

	
	printf("digonal of the cuboid is : %f \n",  pow((l*l)+(b*b)+(h*h),1.0/2) );
	
	
	return 0;
}
