//5. Write a C program with a function to search a number within an array and max number within an array  
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf
int a=0;
int srar(int arr[a],int len,int b);
int mxar(int arr[a],int len);
int main(){
    pf("How many elements you want in an array :");
    sf("%d",&a);
    int num[a];
    for(int i=0;i<a;i++){
        pf("Tell elment at posn(%d) :",i);
        sf("%d",&num[i]);
    }
    int b;
    pf("Tell the element you want to search :");
    sf("%d",&b);
    srar(num,a,b);
    mxar(num,a);
}
int srar(int arr[a],int len,int b){
    int stpr=0;
    for(int i=0;i<len;i++){
        if(arr[i]==b){
            pf("The element %d is in the array at %d index \n",b,i);
            break ;
        }else{
            stpr++;
        }
    }
    if(stpr==len){
        pf("The element isnt present in the array\n");
    }
}
int mxar(int arr[a],int len){
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    pf("The max element in array = %d",max);
}
