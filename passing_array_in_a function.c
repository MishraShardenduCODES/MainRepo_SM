#include<math.h>
#include<stdio.h>

int print_no(int arr[],int n);

int main(){
    int ary[]={2,3,4,5,6};
    print_no(ary,5);
    return 0 ;
}




int print_no(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
