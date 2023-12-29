#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

void countVowels(char *str, int *a, int *e, int *i, int *o, int *u) {
    while (*str != '\0') {
        char c = tolower(*str);

        if (c == 'a') {
            (*a)++;
        } else if (c == 'e') {
            (*e)++;
        } else if (c == 'i') {
            (*i)++;
        } else if (c == 'o') {
            (*o)++;
        } else if (c == 'u') {
            (*u)++;
        }

        str++;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    countVowels(str, &a, &e, &i, &o, &u);
    printf("Count of vowels:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}
