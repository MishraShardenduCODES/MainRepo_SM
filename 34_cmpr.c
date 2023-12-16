// 34. Write a C program to compare given two strings without using builtin function.
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
    printf("Tell first sring : ");
    fgets(str,1000,stdin);
    printf("Tell second sring : ");
    fgets(str2,1000,stdin);
    int a;
    for(a = 0 ; str[a] != '\0' ;){
        a++ ;
    }
    int b;
    for(b = 0 ; str2[b] != '\0' ;){
        b++ ;
    }
    int min,stpr = 0;
    min = a < b ? a : b ; 
    for(int i = 0 ; i < min ; i++ ){
        if(str[i] > str2[i] ){
            stpr = 1;
            printf("1");
            break ;
        }else if( str[i] < str2[i] ){
            stpr = 1;
            printf("-1");
            break ;
        }
    }
    if(stpr == 0 && a == b){
        printf("0");
    }else if(stpr == 0 && a != b){
        if(a == min){
            printf("1");
        }else{
            printf("-1");
        }
    }
    return 0;
}