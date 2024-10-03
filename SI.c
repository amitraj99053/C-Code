//  Write a program to Calculate Simple Interest 
// SI = (P*R*T)/100

#include <stdio.h>

int main()
{
	float SI,p,r,t;
	
	printf("Enter Principle amount : ");
	scanf("%f",&p);
	
	printf("Enter Rate : ");
	scanf("%f",&r);
	
	printf("Enter Time In Years : ");
	scanf("%f",&t);
	
	SI = (p*r*t)/100;
	
	printf("Simple Interest : %.2f",SI);
	
	return 0;
	
}
