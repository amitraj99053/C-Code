/*  Find Income Tax 

    Total Annual 
	Taxable Income          Tax Rate
  i) Up to Rs. 1,00,000     No Tax
 ii) From 1,00,001 to       10% of the income tax
     1,50,000               exceeding Rs. 1,00,000
iii) From 1,50,001 to       Rs. 5000 + 20% of the
     2,50,000               income tax exceeding 
                            Rs. 1,50,000
iv)  Above 2,50,000         Rs. 25000 + 30% of the 
                            income tax exceeding 
                            Rs. 2,50,000

*/

#include <stdio.h>
#include <conio.h>
void main()
{
	float Inc,Tax;
	
	printf("Enter Income : ");
	scanf("%f", &Inc);
	
	if(Inc>250000){ 
		Tax = 25000 + (30*(Inc - 250000)/100);
		printf("Total Tax above 250000 is : %f", Tax);
	}
	else if(Inc>150000){
		Tax = 5000 + (20*(Inc - 150000)/100);
		printf("Total Tax above 150000 is : %f", Tax);
	}
	else if(Inc>100000){
		Tax =  (10*(Inc - 100000)/100);
		printf("Total Tax above 100000 is : %f", Tax);
	}
	else{
		Tax = 0;
		printf("Total Tax is : %f", Tax);
	}
	return 0;
	
}
