#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int dotprd(int*arr,int*arr2,int*arr3,int a);

int main(){
    int a;
    pf("Tell teh length of the array : ");
    sf("%d",&a);
    int arr[a],arr2[a],arr3[a];
    
    for(int i=0;i<a;i++){
        pf("Tell the element in first array : " );
        sf("%d",&arr[i]);
    }

    pf("\n");

    for(int i=0;i<a;i++){
        pf("Tell the element in second array : " );
        sf("%d",&arr2[i]);
    }
    dotprd(arr,arr2,arr3,a);

    pf("\nThe dot product of the 2 array's is : \n");
    for(int i=0;i<a;i++){
        pf("%d ",arr3[i]);
    }
}

int dotprd(int*arr,int*arr2,int*arr3,int a){
    for(int i=0;i<a;i++){
        arr3[i] = arr[i]*arr2[i];
    }
}