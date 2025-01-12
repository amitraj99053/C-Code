/*       Write a c program to copy & count the character content of 
one file says
 a.txt to another file b.txt.     */

#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2;
    char c;
    int count = 0;

    // Open files in appropriate modes
    fptr1 = fopen("a.txt", "r");
    if (fptr1 == NULL) {
        printf("Cannot open file a.txt\n");
        return 1;
    }

    fptr2 = fopen("b.txt", "w");
    if (fptr2 == NULL) {
        printf("Cannot open file b.txt\n");
        fclose(fptr1); // Close the first file before exiting
        return 1;
    }

    // Read characters from a.txt and write to b.txt
    while ((c = fgetc(fptr1)) != EOF) {
        fputc(c, fptr2);
        count++;
    }

    printf("Number of characters copied: %d\n", count);

    // Close the files
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
