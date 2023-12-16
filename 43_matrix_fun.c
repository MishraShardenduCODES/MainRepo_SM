// 43. Write a C program with a functions to perform addition, and subtraction, on two matrices depending upon the user’s choice.
#include<stdio.h>
int add(int a,int b,int mat[a][b],int mat2[a][b]){
    int mat3[a][b];
    printf("The additioin matrix : \n");
    for(int i = 0;i <a; i++){
        for(int j = 0 ; j < b ; j++){
            mat3[i][j] = mat[i][j] + mat2[i][j] ;
            printf(" %d ",mat3[i][j]);
        }
        printf("\n");
    }
}
int diff(int a,int b,int mat[a][b],int mat2[a][b]){
    int mat3[a][b];
    printf("The subtraction matrix : \n");
    for(int i = 0;i <a; i++){
        for(int j = 0 ; j < b ; j++){
            mat3[i][j] = mat[i][j] - mat2[i][j] ;
            printf(" %d ",mat3[i][j]);
        }
        printf("\n");
    }
}
int prd(int a,int b,int mat[a][b],int mat2[a][b]){
    int sum = 0,mat3[a][a] ;
    for ( int i = 0 ; i < a ;i++ ){
        for( int j = 0 ; j < a ;j++ ){
            sum = 0;
            for(int k = 0; k < a ; k++){
                sum += mat[i][k]*mat2[k][j] ;
            }
            mat3[i][j] = sum ;
            printf(" %d ", mat3[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a,b;
    printf("Tell the no of row and column : ");
    scanf("%d%d",&a,&b);
    int mat[a][b] , mat2[a][b] ;
    for(int i = 0;i <a; i++){
        for(int j = 0 ; j < b ; j++){
            printf("Tell the element at (%d , %d) : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The first matrix : \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i <a; i++){
        for(int j = 0 ; j < b ; j++){
            printf("Tell the element for second matrix at (%d , %d) : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("The second matrix : \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf(" %d ", mat2[i][j]);
        }
        printf("\n");
    }
    int x;
    if(a != b){
        printf("Chose 1 to add 2 to subtract : \n");
        scanf("%d",&x);    
    }else{
        printf("Chose 1 to add 2 to subtract and 3 to multiply : \n");
        scanf("%d",&x);
    }
    switch(x){
        case 1 : add(a,b,mat,mat2) ; break ;
        case 2 : diff(a,b,mat,mat2) ; break ;
        case 3 : prd(a,b,mat,mat2) ; break ;
        default : printf("\nInvalid\n");
    }
    return 0;
}