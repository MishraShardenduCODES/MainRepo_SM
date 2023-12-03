//9. Write a C Program to print lower diagonal of a matrix

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Tell the no. of rows for your matirx : ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Tell the element on (%d,%d) position : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("The Lower diagonal is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j == 1){
                printf(" %d ",mat[i][j]);
            }else{
                printf(" _ ");
            }
        }
        printf("\n");
    }
    printf("The Upper diagonal is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( j-i == 1){
                printf(" %d ",mat[i][j]);
            }else{
                printf(" _ ");
            }
        }
        printf("\n");
    }
    return 0;
}
