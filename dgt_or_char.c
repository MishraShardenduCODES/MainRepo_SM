#include<math.h>
#include<stdio.h>

int main(){
    int a;
    printf("Tell - \n");
    scanf("%d",&a);

    if(a==1||a==2||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0){
        printf("Its a digit");
    }
    else{
        printf("Its a charecter");
    }
    return 0;
}
