// 8. Write a C Program to find multiplication of two matrices  #
// 10. Write a C program to check two matrices are identical or not #

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int a,b,c;
int main(){
    pf("Tell the no of rows and column of first matrix : ");
    sf("%d%d",&a,&b);
    pf("Tell the no column in second matrix : ");
    sf("%d",&c);

    int mat[a][b],mat2[b][c],prd[a][c];
    //TAKING INPUT OF THE MATRIX 
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf("Tell the (%d,%d) element for first matrix :  ",i,j);
            sf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            pf("Tell the (%d,%d) element for second matrix :  ",i,j);
            sf("%d",&mat2[i][j]);
        }
    }
    pf("\nThe first matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }
    pf("\nThe second matrix : \n");
    for(int i=0;i<b;i++){
        for(int j=0;j<c;j++){
            pf(" %d ",mat2[i][j]);
        }
        pf("\n");
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            int sum = 0;
            for(int k=0;k<b;k++){
                sum += mat[i][k]*mat2[k][j];
            }
            prd[i][j] = sum ;
        }
    }
    pf("\nThe Product of matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<c;j++){
            pf(" %d ",prd[i][j]);
        }
        pf("\n");
    }
    int stpr=0;
    if (a != b || a != c){
        pf("\nThey aren't identical matrix \n");
        return 0;
    }else{
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(mat[i][j] != mat2 [i][j]){
                    stpr = 1;
                    break;
                }
            }
            pf("\n");
        } 
    }
    if(stpr==1){
        pf("\nThey arent identical matirx");
    }else{
        pf("\nThey are identical matirx");
    }
    return 0;
}