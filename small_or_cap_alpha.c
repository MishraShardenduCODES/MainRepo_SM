#include<stdio.h>
#include<math.h>

int main (){
    char x;
    printf("Tell letter - \n");
    scanf("%c",&x);

    if(x >= 'a' && x <= 'z'){
        printf("Its a small alphabet - %c \n",x);
    }
    else if(x>='A' && x<='Z'){
        printf("Its a capital letter - %c \n",x);
    }
    else{
        printf("Its a number");
    }
    return 0;
}
