#include<math.h>
#include<stdio.h>

int main(){
    for(int i=0;i<5;){
        int x;
        printf("Tell a number - \n");
        scanf("%d",&x);
        if(x%7 != 0){
            printf("Number is not a multiple of 7 -> %d \n",x);
        }
        else{
            printf("Number is divisible by 7 -> %d \n",x);
            break ;
        }
    }
    return 0;
}
