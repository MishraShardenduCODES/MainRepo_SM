// 11. Write C programs to store a list of integer numbers in an array and print the following:
//     maximum value
//     minimum value
//     the average value
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int main(){
    int a,min=INT_MAX,max=INT_MIN; 
    float sum=0;
    printf("tell the no of elemnts : ");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Tell : ");
        scanf("%d",&arr[i]);
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i]; 
        }
        if(arr[i] < min){
            min = arr[i]; 
        }
    }
    printf("The max value is : %d and the min value is : %d and the average is : %f",max,min,sum/a);
}