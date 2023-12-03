#include<string.h>
#include<stdio.h>
#include<math.h>

int main(){
    char str[100];
    printf("Tell -> ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i]=str[i]-32 ;
        }
    }
    printf("%s",str);    
}
