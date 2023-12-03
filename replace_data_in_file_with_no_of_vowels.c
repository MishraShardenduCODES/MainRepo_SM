#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    FILE*fptr;
    char str[100];
    fptr=fopen("Math.txt","w");
    printf("Tell ->");
    fgets(str,100,stdin);
    fprintf(fptr,"%s",str); 
    fclose(fptr);

    FILE*fmptr;
    fmptr=fopen("Math.txt","r");

    char stra ;
    char name [100] ;
    for(int i =0; stra !=EOF;i++){
        stra =fgetc(fmptr);
        name[i] = stra;  
        printf("%c",stra);
    }
    fclose(fmptr);

    FILE*fbptr;
    fbptr=fopen("Math_one.txt","w");
    char strng ;
    for(int i=0;name[i] != '\0';i++){
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
            fprintf(fbptr,"%c",name[i]);
        }
    }
    fclose(fbptr);
    return 0;
}
