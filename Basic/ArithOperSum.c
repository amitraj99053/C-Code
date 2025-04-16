/*  Write a program in C to print arithmetic progression and its sum.
Input: First term: 2, Common difference: 4
Number of terms: 10
Output:
Enter the first term of the A.P.: 2
Enter the common difference: 4
Input number of terms in the series: 10
Arithmetic Progression : 2 6 10 14 18 22 26 30 34 38 
The sum of the AP series is: 200  */

#include <stdio.h>
#include <math.h>
void main()
{
	float a,d,s;
	int n,i;
	
	printf("Enter First No : ");
	scanf("%f",&a);
	
	printf("Enter Common Difference : ");
	scanf("%f",&d);
	
	printf("Enter Total No Of Terms : ");
	scanf("%d",&n);
	
	s = (2*a+(n-1)*d)*n/2;
	
	for(i = 0; i<n; i++)
	  printf("\n%f ",(a+(i*d)));
	printf("Sum of all three terms : %f",s);
	
	getch();	
}
