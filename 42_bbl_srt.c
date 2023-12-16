// 42. Write a C program with a function to sort an array of integers in ascending order.
#include<stdio.h>
int main(){
    int a ;
    printf("Tell the length of array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0; i < a; i++ ){
        printf("Tell elements : ");
        scanf("%d",&arr[i]);
    }
    printf("The array is given by : \n");
    for(int i = 0; i < a; i++ ){
        printf(" %d ",arr[i]);
    }
    int temp,stpr=0;
    for(int i = 0;i < a; i++ ){
        for(int j = 0;j < a - i - 1; j++ ){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is given by : \n");
    for(int i = 0; i < a; i++ ){
        printf(" %d ",arr[i]);
    }
    return 0;
}