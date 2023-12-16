// 7. Write a C program to implement bubble sort
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
    printf("TELL THE NO. OF ELEMENTS : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Tell : ");
        scanf("%d",&arr[i]);       
    }
    int temp;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The array is : ");
    for(int i =0 ;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}