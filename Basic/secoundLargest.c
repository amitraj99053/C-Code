// secound lagest no in array 


#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array size must be at least 2.\n");
        return -1; // Indicate error
    }

    int largest = arr[0];
    int secondLargest = arr[1];

    // Handle the case where the first two elements are already in the correct order
    if (largest < secondLargest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargestNum = findSecondLargest(arr, size);

    if (secondLargestNum != -1) {
        printf("The second largest number is: %d\n", secondLargestNum);
    }

    return 0;
}
