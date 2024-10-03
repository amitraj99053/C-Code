
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
