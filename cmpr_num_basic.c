#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    printf("Tell Value of a - \n");
    scanf("%d",&a);
    printf("Tell Value of b - \n");
    scanf("%d",&b);
    printf("Tell Value of c - \n");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("Bigger no. is = %d \n",a);
    }
    else if(b>c && b>a){
        printf("Bigger no. is = %d \n",b);
    }
    else{
        printf("Bigger no is = %d \n",c);
    }
    return 0;
}
