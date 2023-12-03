#include<stdio.h>
#include<string.h>
#include<math.h>

struct vector{
    int x ;
    int y ;
};

int CalcSum(struct vector v1,struct vector v2);

int main(){
    int x1,x2,y1,y2;
    printf("Tell x1 ->");
    scanf("%d",&x1);

    printf("Tell y1 ->");
    scanf("%d",&y1);

    printf("Tell x2 ->");
    scanf("%d",&x2);

    printf("Tell y2 ->");
    scanf("%d",&y2);

    struct vector v1={x1,y1};
    struct vector v2={x2,y2};
    struct vector sum ={0};

    CalcSum(v1,v2);

    return 0;
}

int CalcSum(struct vector v1,struct vector v2){

    printf("Sum of x part is %d \n",(v1.x+v2.x));
    printf("Sum of y part is %d \n",(v1.y+v2.y));

    return 0;
        
}
