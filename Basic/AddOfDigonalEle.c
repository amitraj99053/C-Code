/*  Write a program to evaluate the addition of diagonal 
elements of two Square matrices.  */


#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the matrices

void readMatrix(int matrix[][MAX_SIZE], int size) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int sumOfDiagonal(int matrix[][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Sum of main diagonal
    }
    return sum;
}

int main() {
    int size;

    printf("Enter the size of the square matrices: ");
    scanf("%d", &size);

    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the first matrix:\n");
    readMatrix(matrix1, size);

    printf("Enter the elements of the second matrix:\n");
    readMatrix(matrix2, size);

    int sum1 = sumOfDiagonal(matrix1, size);
    int sum2 = sumOfDiagonal(matrix2, size);

    printf("Sum of diagonals of matrix1: %d\n", sum1);
    printf("Sum of diagonals of matrix2: %d\n", sum2);
    printf("Sum of diagonals of both matrices: %d\n", sum1 + sum2);

    return 0;
}
