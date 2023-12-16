// 44. Write a C program to find the sum of n numbers using recursion
#include<stdio.h>
int sum(int a){
    int temp=0;
    if( a == 0 ){
        return 0;
    }
    return a + sum(a-1) ;
}
int main(){
    int a,b;
    printf("Tell the no of elements you wanna add : ");
    scanf("%d",&a);
    b = sum(a);
    printf("The sum of all natural no. till %d = %d",a,b);
    return 0;
}