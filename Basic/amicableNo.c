/*  Write a C function to test whether a given pair of numbers 
are amicable numbers. (Amicable number are pairs of 
numbers each of whose divisors add to the other)   */



#include <stdio.h>
#include <math.h>

int sumOfDivisors(int num) {
    int sum = 1; // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            sum += i;
            if (i != num / i) { // Avoid double-counting for perfect squares
                sum += num / i; 
            }
        }
    }
    return sum;
}

int areAmicable(int a, int b) {
    return sumOfDivisors(a) == b && sumOfDivisors(b) == a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (areAmicable(a, b)) {
        printf("%d and %d are amicable numbers.\n", a, b);
    } else {
        printf("%d and %d are not amicable numbers.\n", a, b);
    }

    return 0;
}
