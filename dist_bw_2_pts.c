#include<stdio.h>
#include<math.h> 

int main(){
    int a,x,y;
    printf("Tell 1st point =");
    scanf("%d",&x);

    printf("Tell 2nd point =");
    scanf("%d",&y);

    a= y-x ;
    if(a>0){
        printf("Distance between x and y is = %d",a);
    } else {
        printf("Distance between x and y is = %d",-a);
    }
    return 0;
}
