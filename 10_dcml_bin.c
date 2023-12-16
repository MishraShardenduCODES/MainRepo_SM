// 10. Write a C program using array to compute binary equivalent of a decimal number.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a;
    printf("Tell a number : ");
    scanf("%d",&a); //41
    int b,j=0;
    char arr[100];
    while(a>0){
        b = a % 2 ; // 1 0 0 1 0 1
        arr[j] = b + '0'; // 1 0 0 1 0 1
        a = a / 2 ; //20 10 5 2 1 0
        j++ ;
    }
    for ( int i =j-1 ;i >= 0;i--){
        printf("%c ",arr[i]);
    }
}