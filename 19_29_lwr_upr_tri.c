// 29. Write a C program to print the lower triangular matrix
// 19. Write a C program to print the upper triangular matrix
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    // Input the size of the square matrix
    printf("Enter the number of rows and columns for the square matrix: ");
    scanf("%d", &rows);

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("\nThe original matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print upper triangular matrix
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i <= j) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    // Print lower triangular matrix
    printf("\nLower Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i >= j) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}