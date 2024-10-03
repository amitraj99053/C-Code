

#include <stdio.h>
int main() {
    int calls;
    float bill = 0.0;
    
    printf("Enter the number of calls made: ");
    scanf("%d", &calls);
    
    // For up to 50 calls, minimum Rs. 100
    if (calls <= 50) {
        bill = 100.0;
    }
    // For 51 to 100 calls
    else if (calls <= 100) {
        bill = 100.0 + (calls - 50) * 0.80;
    }
    // For 101 to 200 calls
    else if (calls <= 200) {
        bill = 100.0 + 50 * 0.80 + (calls - 100) * 0.60;
    }
    // For more than 200 calls
    else {
        bill = 100.0 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;
    }
    
    
    // Output the total bill
    printf("Your total telephone bill is: Rs. %.2f\n", bill);
    
    return 0;
}

