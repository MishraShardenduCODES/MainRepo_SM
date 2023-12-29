// 8. Write a C program to compute the perimeter and area of a rectangle given the height and width.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    float l,b;
    pf("Tell the length and the breaddth of the rectangle : ");
    sf("%f %f",&l,&b);
    pf("The area of rectangle is %.4f and the perimeter is %.4f",l*b,2*(l+b));
    return 0;
}