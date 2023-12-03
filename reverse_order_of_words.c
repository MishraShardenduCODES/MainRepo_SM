//10.)Reverse order of words 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int rev(char*str);
int main(){
    char str[1000];
    printf("Tell : ");
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]= '\0' ;
    char str2[1000]="",word[50];
    rev(str);
    int j=0;
    strcat(str," ");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            word[j]='\0';
            rev(word);
            strcat(str2,word);
            strcat(str2," ");
            j=0;
        }else{
            word[j]=str[i];
            j++;
        }
    }
    printf("The reversed order of words of string is :");
    puts(str2);
}

int rev(char*str){
    int a=strlen(str)-1;;
    char b;
    for(int i=0;i<=a/2;i++){
        b=str[i];
        str[i]=str[a-i];
        str[a-i]=b;
    }
    return*str;
}
