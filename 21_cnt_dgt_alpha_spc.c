// 21. Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) {
            special++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
