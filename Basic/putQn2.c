#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int num, count, i;

    // Open DATA file to write numbers
    dataFile = fopen("DATA.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening DATA file!\n");
        return 1;
    }

    // Taking input from user
    printf("Enter the number of integers: ");
    scanf("%d", &count);
    printf("Enter %d integers:\n", count);

    for (i = 0; i < count; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d ", num);
    }
    fclose(dataFile);

    // Open DATA file to read numbers
    dataFile = fopen("DATA.txt", "r");
    if (dataFile == NULL) {
        printf("Error opening DATA file for reading!\n");
        return 1;
    }

    // Open ODD and EVEN files
    oddFile = fopen("ODD.txt", "w");
    evenFile = fopen("EVEN.txt", "w");
    if (oddFile == NULL || evenFile == NULL) {
        printf("Error creating ODD or EVEN files!\n");
        return 1;
    }

    // Read from DATA and categorize numbers
    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(evenFile, "%d ", num);
        else
            fprintf(oddFile, "%d ", num);
    }

    // Close files
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    // Read and display ODD numbers
    oddFile = fopen("ODD.txt", "r");
    if (oddFile == NULL) {
        printf("Error opening ODD file!\n");
        return 1;
    }
    printf("\nOdd Numbers: ");
    while (fscanf(oddFile, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(oddFile);

    // Read and display EVEN numbers
    evenFile = fopen("EVEN.txt", "r");
    if (evenFile == NULL) {
        printf("Error opening EVEN file!\n");
        return 1;
    }
    printf("\nEven Numbers: ");
    while (fscanf(evenFile, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(evenFile);

    return 0;
}
