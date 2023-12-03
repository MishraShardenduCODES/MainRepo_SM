#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("Tell - ");
    scanf("%d",&x);
    int a= x*10;
    
    for(int i=0 ;i<= a;i=i+x){
        printf("%d \n",i);
    }
    return 0;
}
