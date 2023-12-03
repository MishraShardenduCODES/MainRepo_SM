//7.)Write a C program to count occurrences of a word in a given string.
//9.)Write a C program to search all occurrences of a word in given string.
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
    char str[1000],str2[1000];
    int ind[100],k=0;
    int cnt=0,cntw=0;
    pf("Tell the main string :");
    fgets(str,1000,stdin);
    pf("Tell the secord string/word you want to check :");
    fgets(str2,1000,stdin);
    if(strlen(str)<strlen(str2)){
        pf("The second string can't be bigger than first string \n");
    }else if(strlen(str)==strlen(str2)){
        if(strcmp(str,str2)==0){
            pf("The main string is same as the secondary string thus it comes 1 time at 0 index \n");
        }else{
            pf("The second string isnt there in main string \n");
        }
    }else{
        for(int i=0;i<strlen(str)-1;i++){
            if(str[i]==str2[0]){
                for(int j=0;j<strlen(str2)-1;j++){
                    if(str[i]==str2[j]){
                        cnt +=1;
                        i++;
                    }else{
                        i++;
                    }
                }
                if(cnt==strlen(str2)-1){
                    cntw +=1;
                    ind[k]=i;
                    k++;
                    cnt=0;
                }else{
                    cnt=0;
                }
            }
        }
    }
    pf("There are %d occurance of the string/word %sThe position at which it occurs is/are :\n",cntw,str2);
    for(int i=0;i<cntw;i++){
        pf("Index = %d \n",ind[i]-strlen(str2)+1);
    }
    return 0;
}
