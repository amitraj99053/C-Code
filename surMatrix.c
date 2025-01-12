/*  Write a program to print the multiplication of two N*N 
(Square) matrix   */



#include <stdio.h>
#define MAX_SIZE 100

void readMatrix(int matrix[][MAX_SIZE], int size) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the square matrices: ");
    scanf("%d", &size);

    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the first matrix:\n");
    readMatrix(matrix1, size);

    printf("Enter the elements of the second matrix:\n");
    readMatrix(matrix2, size);

    multiplyMatrices(matrix1, matrix2, result, size);

    printf("\nResultant matrix:\n");
    printMatrix(result, size);

    return 0;
}
