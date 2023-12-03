//2.)Write a C program to find length of a given string without using builtin function.
//3.)Write a C program to find length of a given string using builtin function.
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
   int i=0;
   for(i=0;;i++){
      if(str[i] == '\0'){
         break;
      }
   }
   pf("The length of string using the built in function = %d \n",(strlen(str)));
   pf("The length of string without using the built in function = %d \n",i);
   return 0;
}
