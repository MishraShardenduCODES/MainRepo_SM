// 10. Write a program to print all the even and odd numbers of a certain range as indicated by the user. (use any loop)

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int a;
    pf("Tell the value : ");
    sf("%d",&a);
    pf("The even numbers are : ");
    for(int i=0;i<a;i++){
        if(i%2==0){
            pf(" %d ",i);
        }
    }

    pf("\nThe odd numbers are : ");
    for(int i=0;i<a;i++){
        if(i%2!=0){
            pf(" %d ",i);
        }
    }
    return 0;    
}