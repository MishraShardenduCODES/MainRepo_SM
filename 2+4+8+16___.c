#include <stdio.h>
int main(){
    int x;
    printf("Tell how many terms you want to add -> ");
    scanf("%d",&x);

    printf("Sequence is -> \n");

    int a =1,i =1, b=0 ;
    while(i<=x){
        a=a*2 ;
        printf("%d \t",a);
        b=b+a ;
        i++;
    }
    printf("\n ");
    printf("2 to the power of %d = %d and there sum = %d",x,a,b);
    return 0;
}
