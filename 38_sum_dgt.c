// 38. Write a C program with a function to find the sum of digits of a given number.
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int ndgt , a , dum , b=1 ; 
    printf("Tell the number : ");
    scanf("%d",&a);
    dum = a ;
    int c;
    for(ndgt = 1;dum > 0; ndgt++ ){
         dum = dum / b ;
         b = b * 10 ;
    }
    int z = pow(10,ndgt-1); //100
    int m , n ,o = 0;
    for ( int i = 0 ; i < ndgt ; i++ ){
        m = (a % z) ; // 23
        n = (a - m)/z ; // 1
        o += n ;
        z = z / 10 ;
        a = m ;
    }
    printf("The sum is : %d ",o);
}

