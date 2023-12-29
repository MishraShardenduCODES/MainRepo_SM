#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define fpf fprintf
#define pf printf
#define sf scanf 

typedef struct student{
    char frstname[30];
    char lstname[30];
    int roll;
    float marks;
}st;

int main(){
    FILE*fptr;
    fptr = fopen("Student.txt","w");
    if(fptr==NULL){
        pf("The File doesent exist !!\n");
    }
    int a,max=INT_MIN;
    pf("Tell how many student's data you want : ");
    sf("%d",&a);
    st s[a];
    for(int i=0;i<a;i++){
        pf("\nThis is the data of student number %d\n",i+1);
        pf("Tell the name of student %d : ",i+1);
        scanf("%s%s",s[i].frstname,s[i].lstname);

        pf("Tell the roll number of student %d : ",i+1);
        scanf("%d",&s[i].roll);

        pf("Tell the marks of student %d : ",i+1);
        scanf("%f",&s[i].marks);
        if(s[i].marks>max){
            max = s[i].marks; 
        }
    }

    fpf(fptr,"\nTHe data of students is given by : \n");
    fpf(fptr,"Float :     Marks :      Name :\n");
    for(int i=0;i<a;i++){
        fpf(fptr,"%d         ",s[i].roll);
        fpf(fptr,"%.2f        ",s[i].marks);
        fpf(fptr,"%15s %15s\n",s[i].frstname,s[i].lstname);
    }
    fpf(fptr,"\nTHE HIGHEST MARKS ARE : %d\nThe students who got the highest marks are :\n",max);
    for( int i=0;i<a;i++){
        if(max==s[i].marks){
            fpf(fptr,"%s %s\n",s[i].frstname,s[i].lstname);
        }
    }
    
    fclose(fptr);
    return 0;
}