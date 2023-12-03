//3. Write a C program to count occurrences of a character in given string.
//2. Write a C program to find highest frequency character in a string.
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
   pf("Not case sensitive i.e (A=a) \n");
   char str[1000];
   pas;
   fgets(str,1000,stdin);
   char str2[1000];
   for(int i=0;i<=strlen(str);i++){
      if(str[i]<='Z' && str[i]>='A'){
         str[i]=tolower(str[i]);
      }
   }
   strcpy(str2,str);
   int a[27]={0};
   for(int j=0;j<=strlen(str);j++){
      char b;
      for(int i=0;i<=strlen(str);i++){
         if(str2[i] == ' '){
            b=str2[i+1];
            str2[i+1]=str2[i];
            str2[i]=b;
         }
      }
   }
   for(int i=0;str2[i]!=' ';i++){
      int count=0;
      for(int j=0;str2[j]!=' ';j++){
         if(str2[j]==str2[i]){
            a[str2[i]- 'a']++ ;
            str2[j]='*';
         }
      }
   }
   int max=a[0];
   for(int i=1;i<26;i++){
      if(a[i] > max){
         max=a[i];
      }
   }
   pf("The charecter with highest frequency is :");
   for(int i=0;i<26;i++){
      if(a[i]==max){
         pf("%c ",i+ 65);
      }
   }
   pf("\nThe frequency of their occurance is %d times \n",max);

   pf("The frequency of all charecters is :");
   for(int i=0;i<26;i++){
      if(a[i]==0){
         continue;
      }
      pf("\n %c comes %d times ",i+ 65,a[i]);
   }

   return 0;
}
