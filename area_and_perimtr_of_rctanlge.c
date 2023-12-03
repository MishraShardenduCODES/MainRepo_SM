#include<stdio.h>
#include<math.h>

int main(){
    float area, perimeter,l,b;
    printf("Tell Length ->");
    scanf("%f",&l);

    printf("Tell Breadth ->");
    scanf("%f",&b);

    printf("area = %f \n",l*b);
    printf("perimeter = %f \n",2*l+2*b);
    return 0;
}
