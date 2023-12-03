#include<stdio.h>
#include<math.h>

int main(){
    int a,b,x;
    printf("From where you want to know the sum =");
    scanf("%d",&b);

    printf("Tell till where you want to know the sum  =");
    scanf("%d",&x);
    a=0;
    for(int i=b;i<=x;i=i+1){
        a=a+i;
    }
    printf("%d",a);
    return 0;
}
