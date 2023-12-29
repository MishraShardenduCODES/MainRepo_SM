// 10. Write a C program for calculating the factorial of a given number N

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf    

int main(){
    int a,b,fact1=1,fact2=1;
    pf("Tell the element : ");
    sf("%d",&a);
    b=a;
    while(a!=0){
        fact1 *= a ;
        a--;
    }
    pf("The factorial = %d\n",fact1);
    for(;b!=0;b--){
        fact2 *= b;
    }
    pf("The factorial = %d\n",fact2);
    return 0;
}