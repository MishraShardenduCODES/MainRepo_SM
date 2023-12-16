// 36. Write a C program to find highest frequency character in a string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int main(){
    char str[1000];
    int alph[26] = {0} ;
    printf("Tell : ");
    fgets(str,1000,stdin);
    for ( int i = 0; str[i]!= '\0';i++){
        if (isupper(str[i]) ){
            str[i] = tolower(str[i]);
        }
        if(str[i] >= 'a' && str[i] <= 'z'){
            alph[str[i] - 97]++;
        }
    }
    int max = -1,indx;
    for(int i = 0; i < 26 ; i++){
        if(alph[i] > max ){
            max = alph[i];
            indx = i;
        }
        printf("The charecter %c comes %d times \n" ,97+i,alph[i]);
    }
    printf("The max occuring charecter is %c it comes %d times ",indx+97,max);
    return 0;
}