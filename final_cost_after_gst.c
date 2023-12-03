#include<stdio.h>
#include<math.h>

int main(){
    float price[3];

    printf("Tell price of 1st item =");
    scanf("%f",&price[0]);

    printf("Tell price of 2nd item =");
    scanf("%f",&price[1]);

    printf("Tell price of 3rd item =");
    scanf("%f",&price[2]);

    printf("1st = %f ",0.18*price[0] +price[0]);
    printf("2nd = %f ",0.18*price[1] +price[1]);
    printf("3rd = %f ",0.18*price[2] +price[2]);

    float a;
    a=price[0]+(price[0]*0.18)+price[1]+(price[1]*0.18)+price[2]+(price[2]*0.18) ;

    printf(" \n %f ",a);

    return 0;
}
