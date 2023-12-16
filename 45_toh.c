// 45. Write a C program to implement Tower of Hanoi puzzle.
#include <stdio.h>

void toh(int a, char main_rod, char mid_rod, char dest_rod) {
    if (a == 1) {
        printf("Move from %c to %c\n", main_rod, dest_rod);
        return; // Add a return statement for the base case
    }
    toh(a - 1, main_rod, dest_rod, mid_rod);
    printf("Move from %c to %c\n", main_rod, dest_rod);
    toh(a - 1, mid_rod, main_rod, dest_rod);
}

int main() {
    int a;
    printf("Enter the number of rings: ");
    scanf("%d", &a);
    toh(a, 'A', 'B', 'C');
    return 0;
}