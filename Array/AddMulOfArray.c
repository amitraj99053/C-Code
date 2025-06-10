// Addition and multiplication of 2D array
#include <stdio.h>

int main() {
    int rows, cols, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];
    int product[rows][cols];

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            product[i][j] = 0;
            for (k = 0; k < cols; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
