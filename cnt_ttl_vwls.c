//1. Write a C program to count total number of vowels and consonants in a string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int isvowel(char a);

int main(){
   char str[1000];
   int cntV=0,cntC=0;
   pas;
   fgets(str,1000,stdin);
   for(int i=0;str[i]!='\0';i++){
      if(isvowel(str[i]) == 1){
         cntV += 1;
      }else if(isvowel(str[i]) == 2){
         cntC += 1;
      }
   }
   pf("The no of vowels = %d\n",cntV);
   pf("The no of consonant = %d\n",cntC);
   return 0;
}

int isvowel(char a){
   if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'  ){
      return 1;
   }else if ( (a<='z' && a>= 'a') || (a<='Z' && a>= 'A')  ){
      return 2;
   }
}
