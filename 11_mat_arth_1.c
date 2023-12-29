// 3. Write a C program to check a given matrix is an identity matrix or not
// 5. Write a C program to print the upper triangular matrix
// 6. Write a C Program to transpose a matrix
// 7. Write a C Program to read a matrix and print diagonals
// 9. Write a C Program to print lower diagonal of a matrix

#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int a=0;
int main(){
    pf("Tell the number of row and column in matrix you want : ");
    sf("%d",&a);
    int mat[a][a],stpr=0;

    //TAKING INPUT OF THE MATRIX 
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pf("Tell the (%d,%d) element : ",i,j);
            sf("%d",&mat[i][j]);
            if ( ( i==j && mat[i][j]!=1 ) || ( i!=j && mat[i][j]!=0 ) ){
                stpr = 1;
            }
        }
    }

    //PRINTING THE MATRIX
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }
    if(stpr==1){
        pf("It's not an identity matrix\n");
    }else{
        pf("It's an identity matrix\n");
    }

    pf("\nUPPER TRIANGUlAR MATRIX\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if (i > j){
                pf(" _ ",mat[i][j]);    
                continue;
            }
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }

    pf("\nLOWER TRIANGUlAR MATRIX\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if (i < j){
                pf(" _ ",mat[i][j]);    
                continue;
            }
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }

    pf("\nPRIMARY DIAGONAL OF MATRIX\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if (i != j){
                pf(" _ ",mat[i][j]);    
                continue;
            }
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }

    pf("\nSECONDARY DIAGONAL OF MATRIX\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if (i+j != a-1){
                pf(" _ ",mat[i][j]);    
                continue;
            }
            pf(" %d ",mat[i][j]);
        }
        pf("\n");
    }

    return 0;
}
