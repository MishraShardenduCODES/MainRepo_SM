// 10. Write a C program to print a block F using the hash (#):
// # # # # # #
// #
// #
// # # # # #
// #
// #
// #

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main() {
    int i, j;
    int height = 7; // Adjust the height as needed

    // Loop to iterate through each row
    for (i = 0; i < height; i++) {
        // Check if it's the middle two rows or the first column
        if (i == height / 2 || i == 0) {
            for (j = 0; j < height; j++) {
                printf("# ");
            }
        } else {
            printf("#");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}