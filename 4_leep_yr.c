// 4. Write a C program to check whether a year given by the user is a leap year or not.
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
    int a;
    printf("Tell year : ");
    scanf("%d",&a);
    if(a % 100 == 0){
        if(a % 400 == 0){
            pf("It's a leep year.");
        }else{
            pf("It's not a leep year.");
        }
    }else{
        if(a%4 == 0){
            pf("It's a leep year.");
        }else{
            pf("It's not a leep year.");
        }
    }
}