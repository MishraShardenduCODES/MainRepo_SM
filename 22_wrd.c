// 22. Write a C program to count total number of words in a string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int word = 0;
    char str[1000];
    printf("Enter the string (ENTER ATLEAST 1 WORD EMPTY SPACE WILL BE CONSIDERED A WORD IF NOTHING IS ENTERED) : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])&&isspace(str[i+1])) {
            word++;
        }
    }
    printf("Total number of words: %d\n", word); // Add 1 for the last word
    return 0;
}