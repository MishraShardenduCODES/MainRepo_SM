// 37. Write a C program to count no of lines, blank lines and comments in a given program.
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    char ch,str[10000];
    FILE*fptr ;
    fptr = fopen("3_rect_ara.c","r");
        if (fptr == NULL) {
        printf("File opening failed.");
        return 1;
    }
    int i=0;
    while((ch = fgetc(fptr)) != EOF){
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    fclose(fptr);
    int ln_cnt = 0, blnk_ln = 0, cmnt = 0;
    for (int j = 0; j < i; j++) {
        if (str[j] == '/' && (str[j + 1] == '*' || str[j + 1] == '/')) {
            cmnt++;
        }
        if (str[j] == '\n') {
            ln_cnt++;
        }
        if (str[j] == '\n' && str[j + 1] == '\n') {
            blnk_ln++;
        }
    }
    printf("Total no of lines: %d\n", ln_cnt);
    printf("Total no of comment lines: %d\n", cmnt);
    printf("Total no of blank lines: %d\n", blnk_ln);
    printf("Total no of non-blank lines: %d\n", ln_cnt - blnk_ln);
    return 0;
}