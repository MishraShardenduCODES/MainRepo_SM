// // 24. Write a C program to find the sum of the series : 2 + 4 + 8 + 16 + … up to N (two programs - using while, for).
#include <stdio.h>
#include <math.h>

int main() {
    int N, sum = 0, term = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while (term <= N) {
        sum += term;
        term *= 2;
    }
    printf("The sum of the series is: %d\n", sum);
    int N1, sum1 = 0,a1;
    printf("Enter the value of N1: ");
    scanf("%d", &N1);
    a1 = pow(2,N1);
    for (int term1 = 2; term1 <= a1 ; term1 *= 2) {
        sum1 += term1;
    }
    printf("The sum of the series is: %d\n", sum1);
    return 0;
}