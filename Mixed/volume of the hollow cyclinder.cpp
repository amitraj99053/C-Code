// curved surface of the hollow cyclinder = 2*3.14*h*(R-r)


#include<stdio.h>

int main()
{
	float R,r,h;
	
	printf("enter value of R \n");
	scanf("%f", &R);
	
		
	printf("enter value of r \n");
	scanf("%f", &r);
	
	printf("enter value of h \n");
	scanf("%f", &h);
	
	
	printf(" curved surface of the hollow cyclinder   is : %f \n" , 2*3.14*h*(R-r) );
	
	
	
	return 0;
}
