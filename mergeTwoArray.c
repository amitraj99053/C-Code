// merged two array

#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int result[], int m, int n) {
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays into the result array
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < m) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < n) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int result[m + n];

    mergeArrays(arr1, arr2, result, m, n);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
