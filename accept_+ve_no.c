#include <stdio.h>
int main( ){
    int x;
    int i=0;
    printf("Tell a negative no. to stop \n");
    for(int y=0;y>=0;){ 
        i++ ;
        scanf("%d",&x);
        y=x ;
    }
    printf(" no of positive integers = %d",i);
    return 0;
}
