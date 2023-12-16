// 18. Write a C program to check a given matrix is an identity matrix or not#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is an identity matrix
    int is_identity = 1; // Assume it's an identity matrix initially

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                is_identity = 0; // It's not an identity matrix
                break;
            }
        }
        if (is_identity == 0) {
            break;
        }
    }

    if (is_identity == 1) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}


