#include<math.h>
#include<stdio.h>

int main(){
    int a =1 ;
    printf("Tell : ");
    scanf("%d",&a);

    int *ptr = (&a);
    int **pptr = (&ptr);

    printf("%d",**pptr);
    
    return 0;
}
