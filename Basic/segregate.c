// Segregate 0's and 1's

#include <stdio.h>

void segregate0sAnd1s(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Move left pointer until a 1 is encountered
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Move right pointer until a 0 is encountered
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap elements at left and right
        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    segregate0sAnd1s(arr, size);

    printf("Array after segregation:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
