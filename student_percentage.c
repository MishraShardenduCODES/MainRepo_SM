#include<stdio.h>
#include<math.h>

float mark_per(float x,float y,float z);

int main(){
    float a,b,c;
    printf("Tell marks in maths = \n");
    scanf("%f",&a);

     printf("Tell marks in Hindi = \n");
    scanf("%f",&b);

     printf("Tell marks in Sanskrit = \n");
    scanf("%f",&c);

    mark_per(a,b,c);

    return 0;
}
float mark_per(float x,float y,float z){
    float m;
    m= x+y+z;
    printf("Over all percentage = %f \n",m/3);
    printf("Math percent = %f \n",x);
    printf("Hindi percent = %f \n",y);
    printf("Sanskrit percent = %f \n",z);
    return 0;
}
