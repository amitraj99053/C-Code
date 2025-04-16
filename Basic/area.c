//  Write a program to calculate Area of a rectangle
//  Area = L*W

#include <stdio.h>

int main()
{
	float Area,Len,Wid;
	
	printf("Enter Length : ");
	scanf("%f",&Len);
	
	printf("Enter Width : ");
	scanf("%f",&Wid);
	
	Area = Len*Wid;
	
	printf("Area : %f",Area);
	
	return 0;
	
}
