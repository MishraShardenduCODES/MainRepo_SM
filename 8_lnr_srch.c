// 8. Write a C program to implement linear search
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
    printf("Tell no of element : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Tell : ");
        scanf("%d",&arr[i]);
    }
    int b;
    printf("tell what you want to search : ");
    scanf("%d",&b);
    for(int i = 0; i<a ; i++ ){
        if(arr[i]==b){
            printf("%d element is present at %d index",arr[i],i);
        }
    }
}