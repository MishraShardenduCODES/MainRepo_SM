#include<math.h>
#include<stdio.h>

int fact(int a);

int main(){
    int m;

    printf("Tell -");
    scanf("%d",&m);
    
    if (m<0){
        printf("Factorial of -ve dont exist \n");
    } else if (m==0) {
        printf("Factorial of 0 = 1 \n");
    } else {
        printf("%d",fact(m));
        return 0;
        }
}



int fact(int a){              
    if (a==1){
        return 1;
    }
    int b= fact(a-1);
    int c = b *a ;                         
    return c;
}
