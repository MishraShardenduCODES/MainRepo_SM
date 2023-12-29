// 9. Write a C program to find the sum of the series : 2 + 4 + 8 + 16 + … up to N (two programs - using while, for).

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main() {
    int a, i, sum = 0, sum2 = 0;
    
    printf("Tell the number of terms: ");
    scanf("%d", &a);

    // Using for loop
    for (i = 2; i <= pow(2, a); i = i * 2) {
        sum += i;
    }
    printf("The sum of the series for %d terms using for loop is %d\n", a, sum);

    int b = 2, cnt = 0;

    // Using while loop
    while (cnt < a) {
        sum2 += b;
        b = b * 2;
        cnt++;
    }
    printf("The sum of the series for %d terms using while loop is %d\n", a, sum2);

    return 0;
}
