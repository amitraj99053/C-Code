/*   Write a program to find the value of y for a particular value 
of n. The a, x,b, n is input by user
 if n=1 y=ax % b
 if n=2 y=ax2 + b2
 if n=3 y=a - bx
 if n=4 y=a + xb    */
 
 
#include <stdio.h>
#include <math.h>


int main() {
    int a, x, b, n;
    float y;

    printf("Enter values for a, x, b, and n: ");
    scanf("%d %d %d %d", &a, &x, &b, &n);

    if (n == 1) {
        y = (a * x) % b; 
    } else if (n == 2) {
        y = a * x * x + b * b; 
    } else if (n == 3) {
        y = a - b * x; 
    } else if (n == 4) {
        y = a + b * x; 
    } else {
        printf("Invalid value for n.\n");
        return 1;
    }

    printf("The value of y is: %.2f\n", y);

    return 0;
}
