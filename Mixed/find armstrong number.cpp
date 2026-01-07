#include<conio.h>
#include<stdio.h>
#define max 100
void armstrng(int[],int);
void main()
{
       int a[max], n, i=0;
       printf("Enter the limit of array: ");
       scanf("%d", &n);
       printf("Enter the elements of array: ");
       for(i=0; i<n; i++)
       {
              scanf("%d",&a[i]);
        }
        armstrng(a,n);
        return 0;
}
