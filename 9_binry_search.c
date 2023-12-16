// 9. Write a C program to implement binary search
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
    int x ;
    printf("\nTell : ");
    scanf("%d",&x);

    int left=0,right=a-1,mid,stpr=0;
    while(left<=right){
        mid = left + (right - left)/2;
        if(x == arr[mid]){
            stpr = 1;
            printf("The element %d, is at %d index",arr[mid],mid);
            break ;
        }else if(x > arr[mid] ){
            left = mid  + 1;
        }else{
            right = mid - 1;
        }
    }
    if(stpr == 0 ){
        printf("The element is not there in the array ");
    }
}