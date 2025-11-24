//Name: Noorealam
//branch:Civil FE/B
//UIN:2510006
//Rollno:06
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, rows, cols;

    // Input rows and columns
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Adding both matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("Sum of two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
