// 7. Write a C program that accepts input from the keyboard and counts the positive integers until a negative number is entered (two programs - using while, for).

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int a,cnt = 0,cnt1 = 0;
    while (1){
        pf("Tell the element (while) : ");
        sf("%d",&a);
        if(a < 0){
            break ;
        }
        cnt ++ ;
    }
    printf("\n\n");
    for(;1;){
        pf("Tell the element (for) : ");
        sf("%d",&a);
        if(a < 0){
            break ;
        }
        cnt1 ++ ;
    }
    pf("\nThe number of positive number = %d",cnt);
    pf("\nThe number of positive number = %d",cnt1);
    return 0;
}