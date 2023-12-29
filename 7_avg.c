// 8. Write a C program that asks the user to enter some numbers and then find their average (two programs - using while, for).

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    int a,n,sum1=0,sum2=0,cnt = 0;
    pf("Tell how man elements you want : ");
    sf("%d",&n);
    while(cnt<n){
        pf("Tell the element (while) : ");
        sf("%d",&a);
        sum1 += a;
        cnt++;
    }
    cnt = 0;
    pf("The average is given by : %d\n",sum1/n);
    for(;cnt<n;cnt++){
        pf("Tell the element : ");
        sf("%d",&a);
        sum2 += a;
    }
    pf("The average is given by : %d\n",sum2/n);
    return 0;
}