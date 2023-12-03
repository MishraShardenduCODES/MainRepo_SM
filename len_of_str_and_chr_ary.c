//Length of string and char array 
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define spf sprintf
#define sf scanf



int main(){
    char str[100];
    pf("Tell a string : ");
    gets(str);
    int count=0;
    for(int i=0;;i++){
        if(str[i]== '\0'){
            break ;
        }else{
            count += 1;
        }
    }
    pf("Length of string = %d \n",count+1);
    pf("Length of charecter array = %d \n",count);
    return 0;
}
