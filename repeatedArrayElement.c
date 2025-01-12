/*     Write a program to merge two sorted array & no element is repeated during merging.        */

#include <stdio.h>

// Function to merge two sorted arrays without duplicates
void mergeSortedArraysNoDuplicates(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays while maintaining sorted order and removing duplicates
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (k == 0 || merged[k - 1] != arr2[j]) {
                merged[k++] = arr2[j];
            }
            j++;
        } else { // Handle duplicates
            if (k == 0 || merged[k - 1] != arr1[i]) {
                merged[k++] = arr1[i];
            }
            i++;
            j++;
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (i < n1) {
        if (k == 0 || merged[k - 1] != arr1[i]) {
            merged[k++] = arr1[i];
        }
        i++;
    }

    // Copy remaining elements from arr2 (if any)
    while (j < n2) {
        if (k == 0 || merged[k - 1] != arr2[j]) {
            merged[k++] = arr2[j];
        }
        j++;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2]; // Maximum size of the merged array

    mergeSortedArraysNoDuplicates(arr1, n1, arr2, n2, merged);

    printf("Merged array without duplicates: ");
    for (int i = 0; i < n1 + n2; i++) {
        if (merged[i] != 0) {
            printf("%d ", merged[i]);
        }
    }
    printf("\n");

    return 0;
}
