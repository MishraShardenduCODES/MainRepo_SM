//Insertion sort
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
    int j=0,temp;
    for(int i=1;i<=a;i++){
        temp=num[i];
        j=i-1;
        while(j>=0 && num[j]>temp){
            num[j+1]=num[j];
            j-=1;
        }
        num[j+1]=temp;
    }
    for(int i=0;i<a;i++){
        pf("%d ",num[i]);
    }
}
