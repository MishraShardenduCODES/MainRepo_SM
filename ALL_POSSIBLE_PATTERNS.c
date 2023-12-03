#include<stdio.h>

int fact(int a);
void pat1(int a);
void pat2(int a);
void pat3(int a);
void pat4(int a);
void pat5(int a);
void pat6(int a);
void pat7(int a);
void pat8(int a);
void pat9(int a);
void pat10(int a);
void pat11(int a);
void pat12(int a);
void pat13(int a);
void pat14(int a);
void pat15(int a);
void pat16(int a);
void pat17(int a);
void pat18(int a);
void pat19(int a);
void pat20(int a);

int main(){
    int a;
    printf("Tell how many rows you want : ");
    scanf("%d", &a);
    pat1(a);
    printf("\n");
    pat2(a);
    printf("\n");
    pat3(a);
    printf("\n");
    pat4(a);
    printf("\n");
    pat5(a);
    printf("\n");
    pat6(a);
    printf("\n");
    pat7(a);
    printf("\n");
    pat8(a);
    printf("\n");
    pat9(a);
    printf("\n");
    pat10(a);
    printf("\n");
    pat11(a);
    printf("\n");
    pat12(a);
    printf("\n");
    pat13(a);
    printf("\n");
    pat14(a);
    printf("\n");
    pat15(a);
    printf("\n");
    pat16(a);
    printf("\n");
    pat17(a);
    printf("\n");
    pat18(a);
    printf("\n");
    pat19(a);
    printf("\n");
    pat20(3);
    printf("\n");
    return 0;
}

int fact(int a){
    int x=1;
    if(a==0){
        return 1;
    }else{
        for(int i=1;i<=a;i++){
            x=x*i;
        }
        return x;
    }
}

void pat1(int a){
    for(int i=1;i<=a+1;i++){
        for(int j=1;j<=a;j++){
            printf(" * ");
        }
        printf("\n");
    }
}

void pat2(int a){
    for(int i=1;i<=a+1;i++){
        for(int j=1;j<=a;j++){
            if(j==1||j==a||i==1||i==a+1){
                printf(" * ");
            }else{
                printf("   "); 
            }
        }
        printf("\n");
    }
}

void pat3(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
        for(int j=i;j<=2*a-i+1;j++){
            printf("   ");
        }
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=a+1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
        for(int j=i;j<=2*a-i+1;j++){
            printf("   ");
        }
        for(int j=1;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
}

void pat4(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   "); 
        }
        for(int j=1;j<=i;j++){
            printf(" * "); 
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            printf("   "); 
        }
        for(int j=1;j<=i;j++){
            printf(" * "); 
        }
        printf("\n");
    }
}

void pat5(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            printf(" %d ", j);
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf(" %d ", j);
        }
        printf("\n");
    }
}

void pat6(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            printf(" %d ", i);
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf(" %d ", i);
        }
        printf("\n");
    }
}

void pat7(int a){
    for(int i=a;i>1;i--){
        for(int j=1;j<=a-i+1;j++){
            printf(" %d ", i);
        }
        printf("\n");
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i+1;j++){
            printf(" %d ", i);
        }
        printf("\n");
    }
}

void pat8(int a){
    int q=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" %d ", q++);
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf(" %d ", q++);
        }
        printf("\n");
    }
}

void pat9(int a){
    int q=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" %d ", q%2);
            q++;
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf(" %d ", q%2);
            q++;
        }
        printf("\n");
    }
}

void pat10(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=i;j>=1;j--){
            printf(" %d ", j);
        }
        for(int j=2;j<=i;j++){
            printf(" %d ", j);
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=i;j>=1;j--){
            printf(" %d ", j);
        }
        for(int j=2;j<=i;j++){
            printf(" %d ", j);
        }
        printf("\n");
    }
}

void pat11(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf(" * ");
        }
        printf("\n");
    }
}

void pat12(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void pat13(int a){
    for(int i=1;i<=2*(a)+1;i++){
        printf(" * ");
    }
    printf("\n");
    for(int i=1;i<=a;i++){
        for(int j=a-i+1;j>=1;j--){
            printf(" * ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("   ");
        }
        for(int j=a-i+1;j>=1;j--){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=a-i+1;j>=1;j--){
            printf(" * ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("   ");
        }
        for(int j=a-i+1;j>=1;j--){
            printf(" * ");
        }
        printf("\n");
    }
    for(int i=1;i<=2*(a)+1;i++){
        printf(" * ");
    }
    printf("\n");
}

void pat14(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=a;j++){
            printf(" * ");
        }
        printf("\n");
    }
}

void pat15(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("   ");
        }
        for(int j=1;j<=a;j++){
            if(j==1||j==a||i==1||i==a){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void pat16(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        for(int j=i;j<=2*a-i+1;j++){
            printf("   ");
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    for(int i=a+1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        for(int j=i;j<=2*a-i+1;j++){
            printf("   ");
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void pat17(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", i);
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pat18(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pat19(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<=a-i+1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int dmy;
            dmy=fact(i)/(fact(i-j)*fact(j));
            printf("%d ", dmy);
        }
        printf("\n");
    }
}

void pat20(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=9;j++){
            if( (i+j) % 4 == 0 || i==2 && j%4==0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


