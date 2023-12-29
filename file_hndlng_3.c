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
    fptr=fopen("Earth2.txt","r");
    if(fptr==NULL){
        pf("The file doesent exist \n");
    }
    fclose(fptr);

    FILE*fptr2;
    fptr2=fopen("Earth3.txt","r+");
    if(fptr2==NULL){
        pf("The file doesent exist \n");
    }
    fclose(fptr2);

    FILE*fptr3;
    fptr3=fopen("Earth4.txt","w");
    fclose(fptr3);
    
    FILE*fptr4;
    fptr4=fopen("Earth5.txt","w+");
    fclose(fptr4);

    return 0;
}