#include<math.h>
#include<stdio.h>

int sum(int a);

int main(){
    int a;
    printf("Till where you wanna find sum : ");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}


int sum(int a){
    if (a==1){
        return 1;
    }
    int b= sum(a-1);
    int c= b+a;
    return c;
}
