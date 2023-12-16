// 20. Write a C Program to find multiplication of two matrices
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns in Matrix 1 should be equal to the number of rows in Matrix 2.\n");
        return 0;
    }
    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant Matrix (Matrix 1 * Matrix 2):\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
