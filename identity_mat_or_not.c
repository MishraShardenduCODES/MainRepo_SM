//3. Write a C program to check a given matrix is an identity matrix or not
/* An identity matrix is a square matrix in which all the elements of principal diagonals are one, 
and all other elements are zeros.*/
#include<stdio.h>
#include<math.h>
int main(){
    int n,stpr=0;
    printf("Tell the no. of rows/column for your matirx : ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Tell the element on (%d,%d) position : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j ){
                if(mat[i][j] != 1){
                    stpr =1 ;
                }
            }else if(i != j){
                if(mat[i][j] != 0){
                    stpr =1;
                }
            }
        }
        if(stpr == 1){
            printf("This is not an identity matrix , It's given by :\n");
            break ;
        }
    }
    if(stpr == 0){
        printf("Yes it's an Identity matrix given by : \n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("  %d  ", mat[i][j] );
        }
        printf("\n");
    }
    return 0;
}
