#include<math.h>
#include<stdio.h>

float temp_conv(float x);

int main(){
    float a;
    printf("Tell temp in celcius ->");
    scanf("%f",&a);
    temp_conv(a);

    return 0;
}



float temp_conv(float x){
    float y;
    y= x*9.0/5.0+32 ;
    printf("Temp in Fahrenheit %f \n",y);
    return 0;
}
