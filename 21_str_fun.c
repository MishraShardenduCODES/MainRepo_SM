// 1. Write a C program to find total number of alphabets, digits or special character in a string.
// 2. Write a C program to count total number of words in a string.
// 3. Write a C program to check whether a string is palindrome or not.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main() {
    char str[1000], str2[1000];
    
    printf("Enter a string: ");
    fgets(str, 1000, stdin);
    
    int i = 0, cnta = 0, cntd = 0, spc = 0, wrd = 1;
    
    while (str[i] != '\0' && str[i] != '\n') {
        str2[i] = str[i];
        
        if (isalpha(str[i])) {
            cnta += 1;
        } else if (isdigit(str[i])) {
            cntd += 1;
        } else if (isspace(str[i])) {
            spc += 1;
        }
        
        i += 1;
    }
    
    // Ensure the string is null-terminated
    str2[i] = '\0';

    printf("The number of alphabets = %d\n", cnta);
    printf("The number of digits = %d\n", cntd);
    printf("The number of special characters = %d\n", i - cnta - cntd - spc);
    
    // Corrected string reversal for palindrome check
    int len = strlen(str2);
    int isPalindrome = 1;

    for (int j = 0; j < len / 2; j++) {
        if (str2[j] != str2[len - j - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It's a palindrome\n");
    } else {
        printf("It's not a palindrome\n");
    }

    // Counting words in the string
    for (int j = 0; str[j] != '\0'; j++) {
        if (isspace(str[j])) {
            if (isalpha(str[j + 1])) {
                wrd++;
            }
        }
    }
    
    printf("The total number of words = %d\n", wrd);

    return 0;
}
