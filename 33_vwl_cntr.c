// 33. Write a C program that counts the total numbers of vowels and their frequency.
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
    int vowels = 0, consonants = 0, i = 0;
    printf("Enter a string: ");
    fgets(str,1000, stdin);
    while (str[i] != '\0') {
        char ch = toupper(str[i]);
        if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}