#include<string.h>
#include<stdio.h>
#include<math.h>

int main(){

    FILE*fptr;
    fptr= fopen("Number.txt","w");

    int a,b;

    printf("Tell first number ->");
    scanf("%d",&a);
    fprintf(fptr," first number = %d \n",a);

    printf("Tell second number ->");
    scanf("%d",&b);
    fprintf(fptr,"second number = %d \n",b);

    fclose(fptr);

    fptr= fopen("sum.txt","w");
    fprintf(fptr,"Sum = %d",a+b);

    fclose(fptr);

    return 0;
}
