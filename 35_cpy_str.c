// 35. Write a C program to copy one string into another without using builtin function.
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
    printf("Tell a string : ");
    fgets(str,1000,stdin);
    int i;
    for(i=0;str[i] != '\0';i++){
        str2[i] = str[i];
    }
    str2[i] = '\0';
    puts(str2);
    return 0;
}