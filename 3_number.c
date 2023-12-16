// 3. Write a C program to check whether a number given by the user is zero, positive, or negative. If the number is a positive number then check if it is odd or even
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is zero.\n");
    } else if (num > 0) {
        printf("The number is positive.\n");

        if (num % 2 == 0) {
            printf("The positive number is even.\n");
        } else {
            printf("The positive number is odd.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
