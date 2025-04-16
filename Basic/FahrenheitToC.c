// Write a program to convert "Fahrenheit to Celsius" and Celsius to Fahrenheit

#include <stdio.h>
#include <conio.h>

int main() 
{
	
    float F, C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
    
    C = (F - 32) * 5 / 9;
    
    // Fahrenheit = Celsius
    printf("%.2f Fahrenheit = %.2f Celsius\n", F, C);
    return 0;
}

