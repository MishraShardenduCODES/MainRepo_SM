// 8. Write a C program to check if a given sub-string is present in a string.
// 10. Write a C program that reads a line of text and counts all occurrences of a particular word.
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    char str[1000], str2[1000];
    pf("Tell a long sentence : ");
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = 0;
    while (str[len] != '\0') {
        str[len] = tolower(str[len]);
        len++;
    }

    len = 0;
    pf("Tell a word : ");
    fgets(str2, 1000, stdin);
    str2[strcspn(str2, "\n")] = '\0';
    while (str2[len] != '\0') {
        str2[len] = tolower(str2[len]);
        len++;
    }
    int a = strlen(str2), cnt = 0, k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str2[k] == str[i]) {
            for (int j = i; j < i + a; j++) {
                if (str2[k] == str[j]) {  // Change str[k] to str2[k]
                    k++;
                } else {
                    k = 0;
                    break;  // Added break statement
                }
            }
        }
        if (k == a) {
            cnt += 1;
            k = 0;
        }
    }
    pf("The string comes %d times", cnt);
    return 0;
}
