/*   Given a positive integer N, the task is to find the sum of the 
series 1 – (1/2) + (1/3) – (1/4) +…. (1/N) using recursion.
 Examples: 
Input: N = 3 
Output: 0.8333333333333333 
Explanation: 
1 – (1/2) + (1/3) = 0.8333333333333333
 Input: N = 4 
Output: 0.5833333333333333 
Explanation: 
1- (1/2) + (1/3) – (1/4) = 0.5833333333333333    */


#include <stdio.h>

double sumOfSeries(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        double term = (n % 2 == 0) ? -1.0 / n : 1.0 / n; 
        return sumOfSeries(n - 1) + term;
    }
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    double result = sumOfSeries(N);
    printf("Sum of the series: %.12lf\n", result);

    return 0;
}
