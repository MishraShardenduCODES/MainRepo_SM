//4.) Write a C program to compare given two strings without using builtin function.
//5) Write a C program to compare given two strings using builtin function.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define spf sprintf
#define sf scanf
int main(){
   pas;
   char str[1000];
   fgets(str,1000,stdin);
   pas;
   char str2[1000];
   fgets(str2,1000,stdin);
   int a,b,i,min,stpr=0 ;
   a=strlen(str)-1;
   b=strlen(str2)-1;
   min=(a<b)?a:b;
   pf("Without using built in function \n");
   for(i=0;i<=min;i++){
      if(str[i] != str2[i]){
         if(str[i] > str2[i]){
            pf("1 \n");
            stpr=1;
            break;
         }else if(str[i] < str2[i]){
            pf("-1 \n");
            stpr=1;
            break;
         }
      }
   }
   if(stpr !=1){
      pf("0 \n");
   }
   pf("Using built in function \n");
   pf("%d",strcmp(str,str2));
   return 0;
}
