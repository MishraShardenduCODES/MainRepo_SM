// Write a program to evaluate the polynomial: 3x^3 - 5x^2 + 6, for x = 2.55.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    float a,b,x ;
    pf("The the value of x : ");
    sf("%f",&x);
    a=pow(x,3);
    b=pow(x,2);
    printf("The evaluation of 3x^3 - 5x^2 + 6 when x = 2.55 : %f",(3*a-5*b+6));
    return 0;
}