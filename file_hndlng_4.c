#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define pf printf
#define sf scanf

int main() {
    FILE *fptr;
    fptr = fopen("Earth.txt", "r+");
    int i = 0;
    char ch, arr[10000];

    while ((ch = fgetc(fptr)) != EOF) {
        arr[i] = ch;
        i++;
    }

    arr[i] = '\0';
    fclose(fptr);

    FILE *fptr2;
    fptr2 = fopen("Earth6.txt", "w+");
    i = 0;

    while (arr[i] != '\0') {
        fputc(arr[i], fptr2);
        i++;
    }

    fclose(fptr2);
    return 0;
}
