// Q.1 Student Record:
// Define a structure named Student with members for the student's name, roll number, and marks in three subjects.
// Write a C program to input details for multiple students, store them in an array of structures, and 
// print the information for the student with the highest marks.
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define sf scanf 

typedef struct student{
    char frstname[30];
    char lstname[30];
    int roll;
    float marks;
}st;

int main(){
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

    pf("\nTHe data of students is given by : \n");
    pf("Float :     Marks :      Name :\n");
    for(int i=0;i<a;i++){
        pf("%d         ",s[i].roll);
        pf("%.2f        ",s[i].marks);
        pf("%s %s",s[i].frstname,s[i].lstname);
        pf("\n");
    }
    pf("\nTHE HIGHEST MARKS ARE : %d\nThe students who got the highest marks are :\n",max);
    for( int i=0;i<a;i++){
        if(max==s[i].marks){
            pf("%s %s\n",s[i].frstname,s[i].lstname);
        }
    }
    return 0;
}