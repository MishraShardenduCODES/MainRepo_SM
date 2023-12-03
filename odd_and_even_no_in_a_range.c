#include<stdio.h>
int main(){
    int a,b;
    printf("Tell from where => ");
    scanf("%d",&a);
    printf("Tell till where => ");
    scanf("%d",&b);

    printf("Odd Numbers are ->\n");
    for(int j =a ; j<=b ; j++){
        if(j%2 != 0){
            printf("%d \t",j);
        }else{
            continue ;
        }
    }
    printf("\n \n ");
    printf("Even Numbers are ->\n");
    for(int i =a ; i<=b ; i++){
        if(i%2 == 0){
            printf("%d \t",i);
        }else{
            continue ;
        }
    }
    return 0;
}
