//frequency of a char 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define endl printf("\n");
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
    char  str[1000];
    pf("Tell a string : ");
    fgets(str,1000,stdin);
    int alph[26]={0};
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
        if(str[i]<='z' && str[i]>='a'){
            alph[str[i]-97] = alph[str[i]-97] + 1;
        }
    }
    int max=INT_MIN,chr;
    for(int i=0;i<26;i++){
        if(alph[i]>max){
            max=alph[i];
            chr=i;
        }
        pf("The alphabet %c comes %d times \n",i+97,alph[i]);
    }
    pf("The charecter of maximum frequency is \"%c\" and it comes %d times",chr+97,max);
    return 0;
}