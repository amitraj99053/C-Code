//  Write a program to Calculate Compound Interest 

#include <stdio.h>
#include <math.h>

int main() {
    double pri, rate, time, compoundInterest, amount;
    int n;

    printf("Enter principal amount: ");
    scanf("%lf", &pri);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter time (in years): ");
    scanf("%lf", &time);
    
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    //  annual rate from percentage to decimal
    rate = rate / 100;

    // Calculate amount
    amount = pri * pow((1 + rate / n), n * time);

    // Calculate compound interest
    compoundInterest = amount - pri;

    
    printf("Compound Interest = %.2lf\n", compoundInterest);
    printf("Amount = %.2lf\n", amount);

    return 0;
}

