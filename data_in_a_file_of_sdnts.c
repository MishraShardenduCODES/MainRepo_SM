#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    FILE*fptr;
    fptr=fopen("Math.txt","w");

    int a;
    printf("Tell how many students info u wanna save ->");
    scanf("%d",&a);

    
    char p[100]="Name \t";
    char q[100]="Mark \t";
    char r[100]="CGPA \t";
    char s[100]="Course \t";

    fprintf(fptr,"%s \t \t",p);
    fprintf(fptr,"%s \t",q);
    fprintf(fptr,"%s \t",r);
    fprintf(fptr,"%s \n",s);

    for(int i=1;i<=a;i++){
        char str[100] ;
        char str_two[100] ;
        printf("First Name ->");
        scanf("%s",str);

        printf("Second name ->");
        scanf("%s",str_two);

        fprintf(fptr,"%s \t",str);
        fprintf(fptr,"%s \t",str_two); 

        int marks;
        printf("Mark ->");
        scanf("%d",&marks);
        fprintf(fptr,"%d \t",marks);

        float cgpa;
        printf("CGPA ->");
        scanf("%f",&cgpa);
        fprintf(fptr,"%f \t",cgpa);

        char crs[100] ;
        printf("Course Name ->");
        scanf("%s",crs);
        fprintf(fptr,"%s \n",crs);

    }    
 
    return 0;
}
