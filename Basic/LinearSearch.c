// linear search to check a number between 5 numbers.

#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[5] = {2, 5, 8, 1, 9}; 
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int index = linearSearch(arr, 5, target);

    if (index != -1) {
        printf("The number %d is found at index %d\n", target, index);
    } else {
        printf("The number %d is not found in the array.\n", target);
    }

    return 0;
}

