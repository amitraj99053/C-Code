/*
  Write a program that estimated the price of rings for an 
  online shop that sells rings with custom engravings. The 
  online shop has the following price structure:
  • Gold plated rings have a base cost of Rs. 500, and you 
  charge 70.30 per engraved unit.
  • Solid gold rings have a base cost of Rs. 1000, and you 
  charge 10.40 per engraved unit.
  • Silver plated rings have a base cost of Rs. 300, and you 
  charge 5.10 per engraved unit.
  • Find the total cost as per the ring purchase by customer.

*/

#include <stdio.h>
#include <conio.h>
void main(){
	float eng,cost;    //choice= cho, engravings= eng
	int cho;
	
	printf("Enter your choice for plating type \n('Solid gold=1', 'Gold plated=2', 'Silver plated=3') : ");
	scanf("%d",&cho);
	
	printf("Enter no of engravings : ");
	scanf("%d",&eng);
	
	switch(cho)
	{
		case 1:
			cost = (1000+(eng*10.40));
			printf("Cost = %f",&cost);
			break;
			
		case 2:
			cost = (500+(eng*70.30));
			printf("Cost = %f",&cost);
			break;
			
		case 3:
			cost = (300+(eng*5.10));
			printf("Cost = %f",&cost);
			break;
			
		default:
			printf("wrong choice");
	}
	
	getch();
	
	
}
