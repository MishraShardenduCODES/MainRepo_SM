#include<math.h>
#include<stdio.h>

int main(){
    for(int i=0;i<5;){
        int x;
        printf("Tell - \n");
        scanf("%d",&x);
        if (x%2 == 0){
            printf("Even %d \n",x);
        } else {
            printf("%d is an odd no. (cant continue) %d \n",x);
            break;
        }
    }
    return 0;
}
