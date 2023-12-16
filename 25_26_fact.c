// 25. Write a C program for calculating the factorial of a given number N using recursion
// 26. Write a C program for calculating the factorial of a given number N by creating a user defined function fact()
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int facto(int a){
    if(a == 1 || a == 0){
        return 1;
    }else{
        return a*facto(a-1); 
    }
}
int main(){
    int fact=1,a;
    printf("Tell a number whose factorial you want to find : ");
    scanf("%d",&a);
    if( a == 0 ){
        printf("Fact = 1");
    }
    for(int i = 1 ; i <= a ; i++){
        fact = fact*i;
    }
    printf("Fact = %d",fact);
    printf("\nFact = %d",facto(a));
}