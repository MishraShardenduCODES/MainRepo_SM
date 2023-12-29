// 6. Write a C program with a function that will read a string and convert all characters to capital letters.
// 7. Write a C program with a function to add a string to the end of another string without using any library function.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    char str[1000];
    pf("Tell a string : ");
    fgets(str,1000,stdin);
    int i=0;
    while(str[i]!='\0'){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        i+=1;
    }
    puts(str);

    char str2[1000],str3[1000],str4[1000];
    pf("Tell 2 strings : ");
    fgets(str2,1000,stdin);
    str2[strcspn(str2,"\n")] = '\0' ;

    fgets(str3,1000,stdin);
    str2[strcspn(str3,"\n")] = '\0' ;

    int j=0,i1=0;
    while(str2[i1]!='\0'){
        str4[j] = str2[i1];
        j++;
        i1++;
    }
    i1=0;
    while(str3[i1]!='\0'){
        str4[j] = str3[i1];
        j++;
        i1++;
    }
    str4[j+1] = '\0';
    str4[strcspn(str4,"\n")]='\0';
    puts(str4);
}