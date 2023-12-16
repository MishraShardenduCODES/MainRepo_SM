// 41. Write a C program to add a string to the end of another string without using any library function.
#include<stdio.h>

int main(){
    char str[1000],str2[1000];
    int a,b,j=0;
    printf("Tell both the strings : ");
    fgets(str,1000,stdin);
    fgets(str2,1000,stdin);
    for(a=0; str[a] != '\0';){
        a += 1 ;
    }    
    for(b=0; str2[b] != '\0';){
        b += 1 ;
    }
    char str3[a+b];
    for(int i = 0 ; i < a ; i++){
        str3[i] = str[i] ;
        j++ ;
    }
    str3[j-1] = ' ' ;
    for(int i = 0 ; i < b ; i++){
        str3[j++] = str2[i] ;
    }
    str3[j] = '\0';
    puts(str3);
    return 0;
}