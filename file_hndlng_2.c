#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

int main(){
    FILE*fptr;
    fptr=fopen("input.txt","r");
    if(fptr==NULL){
        pf("This file doesnt exist\n");
    }
    int wrd=1;
    char ch;
    while((ch = fgetc(fptr)) != EOF ){
        if(ch == ' ' || ch == '\n' || ch == '\t' || ch == '\0'){
            wrd += 1;
        }
    }
    pf("The number of words in the file = %d\n",wrd);
    fclose(fptr);
    return 0;
}