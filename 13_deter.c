// 4. Write a C program to find the determinant of a matrix.

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int a = 0;
int deter(int mat[a][a],int x);

int main(){
    pf("Tell the number of row and column in matrix you want : ");
    sf("%d",&a);
    int mat[a][a] ;

    //TAKING INPUT OF THE MATRIX 
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pf("Tell the (%d,%d) element : ",i,j);
            sf("%d",&mat[i][j]);
        }
    }
    int d = deter(mat,a);
    //PRINTING THE MATRIX
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }
    pf("The determonant of teh matrix is given by : %d \n",d);
}

int deter(int mat[a][a],int x){
    int s=1,m,n,c,det=0,b[a][a];
    if(x==1){
        return mat[0][0];
    }else{
        for(int c=0;c<x;c++){
            m=0,n=0;
            for(int i=0;i<x;i++){
                for(int j=0;j<x;j++){
                    b[i][j]=0;
                    if(i!=0 &&j!=c){
                        b[m][n]=mat[i][j];
                        if(n<(x-2)){
                            n++ ;
                        }else{
                            n=0 ;
                            m++ ;
                        }
                    }          
                }
            }
            det += s*(mat[0][c]*deter(b,x-1));
            s = -s ;
        }
    }
    return det;
}