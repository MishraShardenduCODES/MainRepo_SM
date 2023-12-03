#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Tell how many value -\t");
    scanf("%d",&n);          //n=5

    int ary[n];
    for(int i=n-1;i<n;i++){
        printf("Tell number ->");
        scanf("%d",&ary[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d \t",ary[i]);
    }

    return 0;      

}
