//  Write a program to determine the roots of quadratic equation
//  x = -b+sqrt((b*b)-4*a*c)

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
        
    } else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("root1 = root2 = %.2lf\n", root1);
        
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

