/*
 Modular exponentiation (Recursive)
 Given three numbers a, b and c, we need to find (ab) % c
 Now why do “% c” after exponentiation, because ab will be 
really large even for relatively small values of a, b and that 
is a problem because the data type of the language that we 
try to code the problem, will most probably not let us store 
such a large number.
 Examples: 
 
Input : a = 2312 b = 3434 c = 6789
 Output : 6343
 Input : a = -3 b = 5 c = 89 
Output : 24
*/

#include <stdio.h>

// Function to perform modular exponentiation
int modExp(int a, int b, int c) {
    if (b == 0)
        return 1;
    int half = modExp(a, b / 2, c);
    int halfMod = (half * half) % c;
    if (b % 2 != 0)
        return (halfMod * a) % c;
    return halfMod;
}

int main() {
    int a, b, c;
    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Result of (%d^%d) %% %d is %d\n", a, b, c, modExp(a, b, c));

    return 0;
}
