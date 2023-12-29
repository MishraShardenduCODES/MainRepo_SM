#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int a=0;
int arth_arr(int*arr,int a,int*max,int*min,int*avg);

int main(){
    int a;
    pf("Tell the size of the array : ");
    sf("%d",&a);
    int arr[a],max,min,avg;
    for(int i=0;i<a;i++){
        pf("Tell the element at %d index : ",i);
        sf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        pf("%d ",arr[i]);
    }
    arth_arr(arr,a,&max,&min,&avg);
    pf("\nThe avg in the array is %d , the min is %d and the max is %d",avg,min,max);
    return 0;
}

int arth_arr(int*arr,int a,int*max,int*min,int*avg){
    int sum=0;
    *min=INT_MAX,*max=INT_MIN;
    for(int i=0;i<a;i++){
        if(arr[i]>*max){
            *max = arr[i];
        }
        if(arr[i]<*min){
            *min = arr[i];
        }
        sum+=arr[i];
    }
    *avg = sum/a ;
}