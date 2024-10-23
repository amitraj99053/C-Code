#include <stdio.h>
#include <math.h>

int main() {
    int F_n, d, n;

    printf("Enter the first term (F_n): ");
    scanf("%d", &F_n);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    double angle = M_PI / 2 - (n - 1) * d;
    int nthTerm = F_n + cos(angle);

    printf("The nth term (an) is: %d\n", nthTerm);

    return 0;
}
