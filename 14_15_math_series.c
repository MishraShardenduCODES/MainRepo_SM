// 14. Write programs to print the sum of the following series (with pow() library function): S = 1 + x + x^2 + x^3 + x^4 + ... n terms
// 15. Write programs to print the sum of the following series (with pow() library function): S = - x + x^2 - x^3 + x^4 - ... n terms
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float x, sum = 0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        sum += pow(x, i);
    }
    printf("The sum of the series is: %.2f\n", sum);

    int n1;
    float x1, sum1 = 0;
    printf("Enter the value of x: ");
    scanf("%f", &x1);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n1);
    for (int i = 1; i < n1; i++) {
        sum1 += pow(-x1, i);
    }
    printf("The sum of the series is: %.2f\n", sum1);
    return 0;
}
