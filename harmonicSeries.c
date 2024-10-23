/*  Write a program in C language to find harmonic series and 
    its sum up to n.
    Enter the range: 10
    Harmonic Sequence is: 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + 
    1/7 + 1/8 + 1/9 + 1/10 
    sum of harmonic series: 2.928968     */
#include <stdio.h>

int main() {
    int n,i;
    float sum = 0.0;

    printf("Enter the range: ");
    scanf("%d", &n);

    printf("Harmonic Sequence is: ");
    
    for (i = 1; i <= n; i++) {
        printf("1/%d", i); 
        
        if (i < n) {
            printf(" + ");  
        }

        sum += 1.0 / i;  
    }

    printf("\nSum of Harmonic series: %.6f\n", sum);

    return 0;
}

