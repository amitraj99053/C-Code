// not working

#include<stdio.h>
void main()
{
int a;
printf("\n enter a number : ");
scanf("%d",&a);
if(a/2&1)
{
    printf("\n number is not exact power",a);
}
else
{
    printf("\n exact power",a);
}
}
