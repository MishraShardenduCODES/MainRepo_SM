#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int nmbr_swp(int*a,int*b);

int main(){
    int a,b;
    a = 5 ;
    b = 6 ;
    pf("a = %d and b = %d\n",a,b);
    nmbr_swp(&a,&b);
    pf("a = %d and b = %d\n",a,b);
    return 0;
}

int nmbr_swp(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}