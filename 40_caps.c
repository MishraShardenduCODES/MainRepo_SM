// 40. Write a C program with a function that will read a string and convert all characters to capital letters.
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[1000] ;
    printf("Tell a sentence : ");
    fgets(str,1000,stdin);
    for(int i = 0 ;str[i] != '\0' ; i++ ){
        if( islower(str[i]) ){
            str[i] = toupper(str[i]) ;
        }
    }
    puts(str);
    return 0;
}