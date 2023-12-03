#include<math.h>
#include<stdiO.h>

int reverser(int arr[],int a);


int main(){
    int n;
    printf("No. of term ->");
    scanf("%d",&n);

    int ary[n];

    for(int i=0;i<n;i++){
        printf("Tell value ->");
        scanf("%d",&ary[i]);
    }
    printf("Orignal Array = \t \n");

    for(int j=0;j<n;j++){
        printf("%d \t",ary[j]);
    }
    printf("\n");

    reverser(ary,n);

    return 0;
}   



int reverser(int arr[],int a){
    for(int k=0;k<a/2;k++){
        int fstval= arr[k];
        int scndval= arr[a-k-1];
        
        arr[k]= scndval;
        arr[a-k-1]= fstval;
    }

    printf("New array = \t \n");

    for(int l=0;l<a;l++){
        printf("%d \t",arr[l]);
    }
    
    printf("\n");
    
}
