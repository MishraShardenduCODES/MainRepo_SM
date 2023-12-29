// 4. Write a C program reads a name and prints the name in an abbreviated fashion, e.g., Ram Dutt as R.D.
// 5. Write a C program to read strings and sort them alphabetically.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000], str2[1000];
    
    printf("Enter a string: ");
    fgets(str, 1000, stdin);
    
    char temp;
    
    // Copy only alphabetic characters to str2
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str2[j] = str[i];
            j++;
        }
    }
    str2[j] = '\0';  // Null-terminate the str2 string
    
    // Sort the characters in str2 alphabetically
    int len = strlen(str2);

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str2[j] > str2[j + 1]) {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str2);
    printf("Sorted string: %s\n", str);

    return 0;
}