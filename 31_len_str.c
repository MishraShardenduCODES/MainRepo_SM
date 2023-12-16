// 31. Write a C Program to find length of a string without using library function/s.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main() {
    char str[1000];
    int length = 0;
    printf("Enter a string: ");
    fgets(str,1000, stdin);
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}