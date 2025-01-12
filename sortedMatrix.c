/*     Print all elements in sorted order from row and column wise 
sorted matrix
 Given an n x n matrix, where every row and column is 
sorted in non-decreasing order. Print all elements of the 
matrix in sorted order.  Example: 
Input: mat[][] = { {10, 20, 30, 40},
                           {15, 25, 35, 45},
                           {27, 29, 37, 48},
                          {32, 33, 39, 50},
                   };
 Output: 10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50    */
 
 
 #include <stdio.h>

void printSortedMatrix(int mat[][4], int n) {
    int i, j, k;
    int *arr = (int*)malloc(n * n * sizeof(int)); 

    // Store all elements in a 1D array
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[k++] = mat[i][j];
        }
    }

    // Sort the 1D array
    for (i = 0; i < n * n - 1; i++) {
        for (j = 0; j < n * n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted elements
    for (i = 0; i < n * n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the dynamically allocated memory
}

int main() {
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    printSortedMatrix(mat, 4);

    return 0;
}
