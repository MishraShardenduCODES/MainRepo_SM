//8. Write a C Program to find multiplication of two matrices
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,sum;
    printf("Tell the no. of rows for your matirx : ");
    scanf("%d",&n);
    printf("Tell the no. of rows for your matirx : ");
    scanf("%d",&m);

    int a,b;
    printf("Tell the no. of rows for your second matirx : ");
    scanf("%d",&a);

    printf("Tell the no. of rows for your second matirx : ");
    scanf("%d",&b);

    if (a != m){
        printf("The column of first and row of second matirx should be equal so this isnt possible.(Please try again) \n");
    }else{

        int mat[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("Tell the element on (%d,%d) position for first matrix: ",i,j);
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

        int mat2[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("Tell the element on (%d,%d) position for second matrix: ",i,j);
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("The Second matrix is given by : \n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf(" %d ",mat2[i][j]);
            }
            printf("\n");
        }

        int prodmat[n][b] ;
        for(int i=0;i<n;i++){
            for(int j=0;j<b;j++){
                sum=0;
                for(int k=0; k<a; k++){
                    sum+= mat[i][k]*mat2[k][j];
                }
                prodmat[i][j]=sum ;
            }
            printf("\n");
        }
        printf("The Product matrix is given by : \n");
        for(int i=0;i<n;i++){
            for(int j=0;j<b;j++){
                printf(" %d ",prodmat[i][j]);       
            }
            printf("\n");
        }
    }
    return 0;
}
