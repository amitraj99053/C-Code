// check whether a given number is Abundant or not
// abundant no eg = 12

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int getSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            if (n / i == i)
                sum = sum + i; 
            else
            {
                sum = sum + i; 
                sum = sum + (n / i); 
            }
        }
    }
    sum = sum - n; 
    return sum; 
}


bool checkAbundant(int n)
{
    return getSum(n) > n; 
}

int main()
{
    int n;
    printf("\n\n Check whether a given number is an Abundant number:\n");
    printf(" --------------------------------------------------------\n");
    printf(" Input an integer number: ");
    scanf("%d", &n); 

    checkAbundant(n) ? printf(" The number is Abundant.\n") : printf(" The number is not Abundant.\n");

    return 0;
}

