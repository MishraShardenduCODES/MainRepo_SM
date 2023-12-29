// 1. Write a C Program to read a matrix and  
// find sum of all elements
// find Row sum
// find column sum
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int a=0,b=0;
int main(){
    pf("Tell the no of rows and column in the matrix : ");
    sf("%d%d",&a,&b);
    int mat[a][b],sumc=0,sumr=0,sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the elements : ");
            sf("%d",&mat[i][j]);
            sum += mat[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sumr += mat[i][j];
        }
        pf("The sum of the %d rows is %d\n",i+1,sumr);
        sumr = 0;
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            sumr += mat[j][i];
        }
        pf("The sum of the %d column is %d\n",i+1,sumr);
        sumr = 0;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }
    pf("The sum of all elements is %d",sum);
    return 0;
}