//8. Write a C program to check if a given sub-string is present in a string.
//10. Write a C program that reads a line of text and counts all occurrences of a particular word.
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
   pf("Tell the main string  :");
   char str[1000];
   fgets(str,1000,stdin);
   int a=strlen(str)-1;
   pf("Tell the sub string   :");
   char str2[1000];
   fgets(str2,1000,stdin);
   int b=strlen(str2)-1;
   int cnt=0,cnt1=0;
   int i;
   int posn;
   if(a<b){
      pf("The Major string is smaller than substring which isnt allowed :");
   }else{
      for(i=0;i<=a;i++){
         if(str[i]==str2[0]){
            for(int j=0;j<b;j++){
               if(str[j]==str2[j]){
                  cnt += 1 ;
               }
                i++;
            }
            if(cnt==b){
               cnt1 = cnt1 + 1;
               cnt = 0; 
            }else{
               cnt = 0;
            }
         }
      }
   }
   pf("There are %d occurance of %s",cnt1,str2);
   return 0;
}
