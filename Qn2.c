#include<stdio.h>
#include<conio.h>

void main( )   
{  
  float a, *b;  
  b = &a; 
  b = b+3;  
  printf (“%d”, b);
    
  return 0;                 
} 
