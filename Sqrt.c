/*   Square Root
Given a non-negative integer x, return the square root 
of x rounded down to the nearest integer. The returned 
integer should be non-negative as well.
You must not use any built-in exponent function 
For example: do not use pow(x, 0.5) 
Example 1: Input: x = 4, Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2: Input: x = 8, Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
we round it down to the nearest integer, 2 is returned.

*/

#include <stdio.h>

int main() {
    int x, left, right, mid;

    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("The square root of %d is %d\n", x, 0);
        return 0;
    }

    left = 1;
    right = x;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (mid * mid == x) {
            printf("The square root of %d is %d\n", x, mid);
            return 0;
        } else if (mid * mid > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    printf("The square root of %d is %d\n", x, left - 1);

    return 0;
}
