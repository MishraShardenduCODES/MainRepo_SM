// 12. Write a C program to check element uniqueness (if any duplicate element is present in the list).
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
    int a ; 
    printf("Tell no of elements : ");
    scanf("%d",&a);
    int arr[a],num[a];

    for(int i = 0;i < a;i++){
        printf("Tell : ");
        scanf("%d",&arr[i]);
        num[i]= 0;
    }
    for(int i = 0;i < a;i++){
        for(int j = i+1;j < a;j++){
            if(arr[i] == arr[j]){
                num[i]++;
            }
        }
    }
    for(int i = 0 ; i < a;i++){
        if(num[i] > 0){
            printf("%d is a duplicate elements \n",arr[i]);
        }
    }
    return 0;
}