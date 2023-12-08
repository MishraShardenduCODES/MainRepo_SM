#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define endl printf("\n");
#define pan printf("Tell a no. :");
#define pas printf("Tell a sentence :");
#define sf scanf

int swp(int*a,int*b);
char swpc(char*a1,char*b1);
int main(){
    int a=4,b=5;
    pf("%d and %d",a,b);
    endl
    swp(&a,&b);
    pf("%d and %d",a,b);
    endl
    
    char a1='a',b1='b';
    pf("%c and %c",a1,b1);
    endl
    swpc(&a1,&b1);
    pf("%c and %c",a1,b1);
    endl
    return 0;
}
int swp(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

char swpc(char*a1,char*b1){
    char temp;
    temp=*a1;
    *a1=*b1;
    *b1=temp;
}