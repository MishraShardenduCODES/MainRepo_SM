#include<stdio.h>
#include<string.h>
#include<math.h>

int slicer_r(char arr[]);
int vwl_cntr(char arr[]);

int main(){
    char pass [100];
    printf("Tell ->");
    fgets(pass,100,stdin);

    vwl_cntr(pass);
    //slicer_r(pass);
    
    return 0;
}


int slicer_r(char arr[]){
    char newstr[100];

    int a,b;
    printf("Tell from where ->");
    scanf("%d",&a);
    printf("Till where ->");
    scanf("%d",&b);
    

    strcpy(newstr,arr);
    
    for(int i=a+1;i<=b+1;i++){
        printf("%c",newstr[i]);
    }
    return 0;
}




int vwl_cntr(char arr[]){
    char newstr[100];
    strcpy(newstr,arr);
    int count =0;
    int len =0;
    for(int i=0;newstr[i] !='\0';i++){
        len++ ;
    }

    for(int i=0; newstr[i]!= '\0' ;i++){
        if(newstr[i]== 'a' ||  newstr[i]== 'e' || newstr[i]== 'i' ||
         newstr[i]== 'o' || newstr[i]== 'u' || newstr[i]== 'A'  ||
         newstr[i]== 'E' || newstr[i]== 'I' || newstr[i]== 'O' || newstr[i]== 'U'){
            count++;
        } else{
            continue ;
        }
    }
    printf("Vowel = %d \n",count);
    
    printf("Consonant = %d \n",len-count);
    return 0;
}
