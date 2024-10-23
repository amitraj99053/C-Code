#include <stdio.h>

int main() {
    int num, sum;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    // Calculate the sum of the digits
    sum = (num / 10000) + 
          (num / 1000 % 10) + 
          (num / 100 % 10) + 
          (num / 10 % 10) + 
          (num % 10);
    
    printf("Sum of the digits: %d\n", sum);
    
    return 0;
}

