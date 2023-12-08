#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define endl printf("\n");
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
    char name[50];
    pf("Tell a string : ");
    fgets(name,50,stdin);
    int cnt=0,b;
    for(int i=0;name[i]!='\0';i++){
        if(isupper(name[i])){
            name[i]=tolower(name[i]);
        }
        if(name[i]<= 'a' || name[i]>= 'z'){
            cnt++;
        }
    }
    pf("The no of charecter in the string = %d \n",cnt);
    return 0;
}