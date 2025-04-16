/*   Write a program to find the transpose of a given matrix & 
check whether it is symmetric or not.   */

#include <stdio.h>

#define MAX_SIZE 100

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[][MAX_SIZE], int transpose[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }
}

int isSymmetric(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    readMatrix(matrix, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);

    printf("\nTranspose Matrix:\n");
    printMatrix(transpose, cols, rows); 

    if (isSymmetric(matrix, rows)) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}
