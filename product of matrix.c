#include <stdio.h>
void multiply(int A[][10], int B[][10], int C[][10], int m, int n, int p) {
 int i, j, k;
 for (i = 0; i < m; i++) {
 for (j = 0; j < p; j++) {
 C[i][j] = 0;
 for (k = 0; k < n; k++) {
 C[i][j] += A[i][k] * B[k][j];
 }
 }
 }
}
int main() {
 int A[10][10], B[10][10], C[10][10], m, n, p;
 int i, j;
 printf("Enter the number of rows and columns of first matrix: ");
 scanf("%d %d", &m, &n);
 printf("Enter the elements of first matrix: \n");
 for (i = 0; i < m; i++) {
 for (j = 0; j < n; j++) {
 scanf("%d", &A[i][j]);
 }
 }
 printf("Enter the number of rows and columns of second matrix: ");
 scanf("%d %d", &n, &p);
 printf("Enter the elements of second matrix: \n");
 for (i = 0; i < n; i++) {
 for (j = 0; j < p; j++) {
 scanf("%d", &B[i][j]);
 }
 }
 multiply(A, B, C, m, n, p);
 printf("Product of the two matrices is: \n");
 for (i = 0; i < m; i++) {
 for (j = 0; j < p; j++) {
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }
 return 0;
}