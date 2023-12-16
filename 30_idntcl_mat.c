// 30. Write a C program to check if given two matrices are identical
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
#define MAX_ROWS 10
#define MAX_COLS 10
int main(){
    int rows, cols;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int identical = 1; // Assume matrices are identical initially
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                identical = 0; // If elements differ, set flag to indicate non-identical matrices
                break; // Exit inner loop
            }
        }
        if (identical == 0) {
            break; // Exit outer loop if matrices are non-identical
        }
    }
    if (identical == 1) {
        printf("The matrices are identical.\n");
    } else {
        printf("The matrices are not identical.\n");
    }
    return 0;
}