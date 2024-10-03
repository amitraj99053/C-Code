// Write a program to convert Fahrenheit to Celsius and "Celsius to Fahrenheit"

#include <stdio.h>
#include <conio.h>
int main()
{
	float F,C;
	
	printf("Enter Temp. in Celsius : ");
	scanf("%f",&C);
	
	F = ((C*9)/5+32);
	
	 // Celsius = Fahrenheit
	printf("%.2f Celsius = %.2f Fahrenheit ", C,F);
	
	return 0;
}
