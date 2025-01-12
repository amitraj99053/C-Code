//  Duplicate element in array

#include <stdio.h>

void findDuplicates(int arr[], int size) {
    printf("Duplicate elements in the array:\n");
    
	for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // No need to check further for this element
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    findDuplicates(arr, size); 

    return 0;
}
