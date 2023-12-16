// 27. Write a C program for calculating the nth fibonacci number using recursion
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int fib(){
    int temp,a = 0,b = 1;
    int n;
    printf("Tell the no of elements : ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i = 1 ; i <= n-2 ; i++){
        temp = b;
        b = a + b;
        a = temp;
        printf("%d ",b);
    }
}
int main(){
    fib();
}