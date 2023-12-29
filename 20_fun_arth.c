// 9. Write a C program with a functions to perform addition, subtraction, and multiplication on two matrices depending upon the user’s choice.
// 10. Write functions to convert feet to inches, convert inches to centimeters, and convert centimeters to meters. Write a program that prompts a user for a measurement in feet and converts and outputs this value in meters. Facts to use: 1 ft = 12 inches, 1 inch = 2.54 cm, 100 cm = 1 meter.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 
#define MAX_SIZE 100

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

float feetToInches(float feet) {
    return feet * 12.0;
}

float inchesToCentimeters(float inches) {
    return inches * 2.54;
}

float centimetersToMeters(float centimeters) {
    return centimeters / 100.0;
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    inputMatrix(A, rowsA, colsA);

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    inputMatrix(B, rowsB, colsB);

    if (rowsA == rowsB && colsA == colsB) {
        int choice;
        printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(A, B, result, rowsA, colsA);
                displayMatrix(result, rowsA, colsA);
                break;
            case 2:
                subtractMatrices(A, B, result, rowsA, colsA);
                displayMatrix(result, rowsA, colsA);
                break;
            case 3:
                if (colsA == rowsB) {
                    multiplyMatrices(A, B, result, rowsA, colsA, colsB);
                    displayMatrix(result, rowsA, colsB);
                } else {
                    printf("Invalid matrix multiplication dimensions.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
        }
    } else {
        printf("Matrix dimensions do not match for the selected operation.\n");
    }

    float measurementInFeet;

    printf("Enter a measurement in feet: ");
    scanf("%f", &measurementInFeet);

    float measurementInInches = feetToInches(measurementInFeet);
    float measurementInCentimeters = inchesToCentimeters(measurementInInches);
    float measurementInMeters = centimetersToMeters(measurementInCentimeters);

    printf("Measurement in meters: %.2f\n", measurementInMeters);

    return 0;
}
