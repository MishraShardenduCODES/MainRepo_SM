#include <stdio.h>  
#include<math.h>
#include<string.h>


int main(){  
    char str[100];
    printf("Tell ->");
    fgets(str,100,stdin);

    for(int i=0;str[i] != '\0';i++){
        int a;
        if(str[i]<=122 && str[i]>=97){
            str[i]=str[i]-32 ;
        } else if(str[i]<=90 && str[i]>=65) {
            str [i]= str[i] +32 ;
        }
    }
    printf("%s",str);
    return 0;  
}
