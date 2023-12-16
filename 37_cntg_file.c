// 37. Write a C program to count no of lines, blank lines and comments in a given program.
#include <stdio.h>
int main() {
    FILE *fptr;
    char arr[10000], ch;
    fptr = fopen("cntg_file.c", "r");
    if (fptr == NULL) {
        printf("File opening failed.");
        return 1;
    }
    int i = 0;
    while ((ch = fgetc(fptr)) != EOF) {
        arr[i] = ch ; 
        i++ ;
    }
    arr[i] = '\0' ;
    fclose(fptr);

    int ln_cnt = 0, blnk_ln = 0, cmnt = 0;
    for (int j = 0; j < i; j++) {
        if (arr[j] == '/' && (arr[j + 1] == '*' || arr[j + 1] == '/')) {
            cmnt++;
        }
        if (arr[j] == '\n') {
            ln_cnt++;
        }
        if (arr[j] == '\n' && arr[j + 1] == '\n') {
            blnk_ln++;
        }
    }
    printf("Total no of lines: %d\n", ln_cnt);
    printf("Total no of comment lines: %d\n", cmnt);
    printf("Total no of blank lines: %d\n", blnk_ln);
    printf("Total no of non-blank lines: %d\n", ln_cnt - blnk_ln);
    return 0;
}
