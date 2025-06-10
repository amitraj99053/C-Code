#include <stdio.h>
// Multiplication of 2D Array

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // matrix multiplication
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
