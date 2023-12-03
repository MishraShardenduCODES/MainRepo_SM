#include<stdio.h>
#include<math.h> 

int main(){
    int x;
    printf("How big F you want in height ->");
    scanf("%d",&x);
    for(int i = 1;i<=x;i++){
        if(i==1){
            for(int j =1;j<=x;j++){
                printf("# ");
            }
            printf("\n");
        }
        else if(i==4){
            for(int k =1;k<=x-1;k++){
                printf("# ");
            }
            printf("\n");
        }
        else {
            printf("# \n");
        }
    }
    return 0;
}
