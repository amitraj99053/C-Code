/*  Write a program in C to print arithmetic progression and its sum.
    Input: First term: 2, Common difference: 4
    Number of terms: 10
    Output:
    Enter the first term of the A.P.: 2
    Enter the common difference: 4
    Input number of terms in the series: 10
    Arithmetic Progression : 2 6 10 14 18 22 26 30 34 38 
    The sum of the AP series is: 200  */

#include <stdio.h>

int main() {
    int firstTerm, commonDifference, numTerms, currentTerm, i, sum = 0;

    printf("Enter first No : ");
    scanf("%d", &firstTerm);

    printf("Enter common diff No : ");
    scanf("%d", &commonDifference);

    printf("Input N No Of Series: ");
    scanf("%d", &numTerms);

    printf("Arithmetic Progression: ");

    for (i = 0; i < numTerms; i++) {
        currentTerm = firstTerm + i * commonDifference;  
        printf("%d ", currentTerm); 
        sum += currentTerm;
    }

    printf("\nThe sum of the AP series is: %d\n", sum);

    return 0;
}

