/*    Write a program that estimated the price of rings for an 
      online shop that sells rings with custom engravings. The 
      online shop has the following price structure:
      • Gold plated rings have a base cost of Rs. 500, and you 
        charge 70.30 per engraved unit.
      • Solid gold rings have a base cost of Rs. 1000, and you 
      charge 10.40 per engraved unit.
      • Silver plated rings have a base cost of Rs. 300, and you 
      charge 5.10 per engraved unit.
      • Find the total cost as per the ring purchase by customer.  */

#include<stdio.h>
void main()
{
    char ring;
    int engravings,tot;
    
    printf("\n welcome to online shoping");
    printf("\n Chose Option ('Solid gold=1', 'Gold plated=2', 'Silver plated=3') : ");
    scanf("%c",&ring);
    
    printf("\n Enter engravings : ");
    scanf("%d",&engravings);
    
    switch(ring)
    {
    case '1':
    tot = 500+(70.30*engravings);
    printf("\n Gold plated total cost : %d",tot);
    break;
    
    case '2':
    tot = 1000+(10.40*engravings);
    printf("\n Silver gold total cost : %d",tot);
    break;
    
    case '3':
    tot = 300+(5.10*engravings);
    printf("\n Silver plated total cost : %d",tot);
    break;
    
    default:
    printf("Wrong option");
    }
    
    getch();

}
