/*10. Write a program that accepts a word from the user and prints it in the following way. For example, if the word is COMPUTER, the program will print it as
C
C O
C O M
C O M P
C O M P U
C O M P U T
C O M P U T E
C O M P U T E R */
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define spf sprintf
#define sf scanf

int main(){
    char str[100];
    pas;
    fgets(str,100,stdin);
    int b=strlen(str);

    for(int i=1;i<b-1;i++){
        for(int j=1;j<=i;j++){
            pf("%c",str[j-1]);
        }
                
        for(int j=1;j<=b-i+2;j++){
            pf("  ");
        }

        for(int j=i;j>=1;j--){
            pf("%c",str[j-1]);
        }

        pf("\n");
    }

    for(int i=b-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            pf("%c",str[j-1]);
        }
                
        for(int j=1;j<=b-i+2;j++){
            pf("  ");
        }

        for(int j=i;j>=1;j--){
            pf("%c",str[j-1]);
        }

        pf("\n");
    }

    return 0;
}
