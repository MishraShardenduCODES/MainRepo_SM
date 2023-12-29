// 3. Write a C program using array to compute binary equivalent of a decimal number.
// 4. Write a C program to compute binary equivalent of a decimal number without using array.

#include <stdio.h>
void decimalToBinary(int decimalNumber) {
    int binaryNumber[32]; // Assuming a 32-bit binary representation
    int i = 0;
    // Convert decimal to binary
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        i++;
    }
    printf("Binary Equivalent : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }
    printf("\n");
}

void decimalToBinaryWithoutArray(int decimalNumber) {
    int binaryNumber = 0;
    int base = 1;
    // Convert decimal to binary without using an array
    while (decimalNumber > 0) {
        int remainder = decimalNumber % 2;
        binaryNumber = binaryNumber + remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }
    // Print binary equivalent
    printf("Binary Equivalent (without array): %d\n", binaryNumber);
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decimalToBinary(decimalNumber);
    decimalToBinaryWithoutArray(decimalNumber);

    return 0;
}
