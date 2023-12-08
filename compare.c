//frequency of a char 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define endl printf("\n");
#define pan printf("Tell a no. :");
#define pas printf("Tell a sentence :");
#define sf scanf

int main(){
    char str1[1000];
    pas;
    fgets(str1,1000,stdin);
    str1[strcspn(str1,"\n")]='\0';
    
    char str2[1000];
    pas;
    fgets(str2,1000,stdin);
    str2[strcspn(str2,"\n")]='\0';
    int flag=0;
    for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++){
        if(str1[i] == '\0' || str2[i] == '\0' || str1[i]!=str2[i]){
            flag=1;
            pf("Unequal Strings \n");
            break;
        }
    }
    if(flag==0){
        pf("Equal Strings \n");
    }
    return 0;
}