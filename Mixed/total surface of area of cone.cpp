// total surface area of cone = 3.14*r*(l+r)


#include<stdio.h>
#include<conio.h>


int main()

{
	float r,l;
	
	printf("enter value of r : \n");
	scanf("%f", &r);
	
	printf("enter value of l : \n");
	scanf("%f", &l);
	
	printf("total surface area of cone is : %f \n", 3.14*r*(l+r));
	
	return 0;
	
	
}
