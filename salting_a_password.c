#include<stdio.h>
#include<string.h>
#include<math.h>

int salt_int(char arr[]);

int main(){
    char pass [100];
    printf("Tell ->");
    scanf("%s",pass);

    salt_int(pass);

    return 0;
}


int salt_int(char arr[]){
    char ary[] = "123" ;
    char new[100] ;

    strcpy(new,arr); 
    strcat(new,ary);

    printf("%s",new);
    return 0;
}
