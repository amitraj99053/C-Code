// set matrix zero

#include <stdio.h>

#define ROWS 3
#define COLS 4

void setZeroes(int matrix[ROWS][COLS]) {
    int row[ROWS] = {0};
    int col[COLS] = {0};

    // Mark rows and columns with 0
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Set rows to 0
    for (int i = 0; i < ROWS; i++) {
        if (row[i] == 1) {
            for (int j = 0; j < COLS; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to 0
    for (int j = 0; j < COLS; j++) {
        if (col[j] == 1) {
            for (int i = 0; i < ROWS; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 1, 1, 0},
        {1, 0, 1, 2},
        {1, 1, 1, 5}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    setZeroes(matrix);

    printf("\nMatrix after setting zeroes:\n");
    printMatrix(matrix);

    return 0;
}
