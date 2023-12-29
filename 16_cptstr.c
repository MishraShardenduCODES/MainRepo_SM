// 6. Write a C program to copy one string into another without using builtin function.
// 7. Write a C program to copy one string into another using builtin function.
// 9. Write a C program to reverse a given string and print.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    char str[1000],str2[1000],str3[1000],str4[1000];
    int a=0;
    pf("Tell both the strings : \n");
    
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")] = '\0' ;

    strcpy(str2,str);
    puts(str2);

    while(str[a]!='\0'){
        str3[a] = str[a];
        a++ ;
    }
    puts(str3);

    for(int i=0 ; str[i] != '\0';i++){
        str4[a-i-1] = str[i];
    }
    str4[a] = '\0';
    puts(str4);
    return 0;
}