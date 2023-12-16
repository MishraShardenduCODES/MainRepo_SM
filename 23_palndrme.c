// 23. Write a C program to check whether a string is palindrome or not.
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
    char str[1000],str2[1000];
    printf("Tell : ");
    fgets(str,1000,stdin);
    int x = strlen(str);
    str[strcspn(str,"\n")]= '\0' ;
    for(int i = 0;str[i] != '\0';i++){
        str2[x-i-1] = str[i];
    }
    str2[x] = '\0';
    puts(str2);
    if(strcmp(str,str2) == 0 ){
        printf("Yes it's a palindrome ");
    }else{
        printf("No it's not a palindrome ");
    }
}