// 45. Write a C program to implement Tower of Hanoi puzzle.
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 


void toh(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    toh(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    toh(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    printf("Enter the number of rings: ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    return 0;
}
