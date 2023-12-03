#include<stdio.h>
#include<math.h>

int main(){
    int age;
    printf("Tell : ");
    scanf("%d",&age);

    age>= 18 ? printf("adult \n"): age<18 && age>=12 ? printf("Teen"): printf("kid");
    return 0;
}
