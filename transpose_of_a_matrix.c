//6. Write a C Program to transpose a matrix

#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("Tell the no. of rows for your matirx : ");
    scanf("%d",&n);
    printf("Tell the no. of column for your matirx : ");
    scanf("%d",&m);

    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Tell the element on (%d,%d) position : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is given by : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf(" %d ",mat[i][j]);
        }
        printf("\n");
    }
    int trmat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trmat[i][j] = mat[j][i] ;
        }
    }
    printf("The Transpose of the matrix is given by : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",trmat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
