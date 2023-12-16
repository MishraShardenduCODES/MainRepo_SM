// 39. Write a C program with a function to search a number within an array.
#include<stdio.h>
int main(){
    int a,b,ind = -1;
    printf("Tell length of array : ");
    scanf("%d",&b);
    int arr[b];
    printf("Tell the number : ");
    scanf("%d",&a);
    for( int i = 0 ;i < b; i++ ){
        printf("Tell the elemnet : ");
        scanf("%d",&arr[i]);
        if ( arr[i] == a ){
            ind = i ;
        }
    }
    if(ind > 0){
        printf("The element is present in the array ");
    }else{
        printf("The element is not present in the array ");
    }
    return 0 ;
}