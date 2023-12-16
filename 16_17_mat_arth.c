// 16. Write a C Program to read a matrix and  
//     find sum of all elements
//     print diagonal elements

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, sum = 0;

    printf("Enter the number of rows and columns of the matrix (max 10 each): ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Print diagonal elements and calculate sum of all elements
    printf("Diagonal elements:\n");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSum of all elements: %d\n", sum);

    return 0;
}

// 17. Write a C Program to read a matrix and
//     find Row sum
//     find column sum

#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix (max 10 each): ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sum
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, rowSum);
    }

    // Calculate column sum
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d sum: %d\n", j + 1, colSum);
    }

    return 0;
}
