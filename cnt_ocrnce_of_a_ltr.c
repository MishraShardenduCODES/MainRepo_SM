//5. Write a C program to read a text and count all the occurrences of a particular letter given by the user.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define spf sprintf
#define sf scanf



int main(){
    char str[100];
    int count=0;
    pf("Tell a string : ");
    gets(str);
    char c;
    pf("Tell the charecter you want to check : ");
    scanf("%c",&c);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]== c){
            count++ ;
        }
    }
    pf("The charecter %c occurs %d times \n",c,count);
    return 0;
}
