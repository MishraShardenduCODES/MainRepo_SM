//Selection sort
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
    int a;
    pf("How many terms you want to sort : ");
    sf("%d",&a);
    int num[a];
    for(int i=0;i<a;i++){
        pf("Tell element numebr (%d) :",i+1);
        sf("%d",&num[i]);
    }
    int min,temp;
    for(int i=0;i<a;i++){
        min=i;
        for(int j=i+1;j<a;j++){
            if(num[j]<num[min]){
                min=j;
            }
        }
        temp=num[i];
        num[i]=num[min];
        num[min]=temp;
    }
    for(int i=0;i<a;i++){
        pf(" %d ",num[i]);
    }
}