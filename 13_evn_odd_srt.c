// 13. Write a C program store the list of integer numbers in an array. Arrange the numbers stored in an array in such a way that the array will have the odd numbers followed by the even numbers.
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
    int a,evn_cnt,odd_cnt;
    printf("Tell the no of elemnets you want in aur array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i < a ; i++){
        printf("Tell : ");
        scanf("%d",&arr[i]);
    }
    int j = 0; 
    int arr2[a];
    for( int i = 0 ; i < a ; i ++ ){
        if(arr[i] % 2 != 0 ){
            arr2[j] = arr[i];
            j++ ; 
        }
    }
    for( int i = 0 ; i < a ; i ++ ){
        if(arr[i] % 2 == 0 ){
            arr2[j] = arr[i];
            j++ ; 
        }
    }
    for(int i = 0 ; i < a ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0 ; i < a ; i++){
        printf("%d ",arr2[i]);
    }
}