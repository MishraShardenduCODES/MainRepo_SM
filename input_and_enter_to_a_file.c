#include<string.h>
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Tell how many students you wanna save = ");
    scanf("%d",&a);
    FILE*fptr;
    fptr=fopen("Main.txt","w");
    char name[100];
    int age;
    float cgpa;

    for(int i=1;i<=a;i++){

    printf("Tell Name ->");
    scanf("%s",name);


    printf("Tell age ->");
    scanf("%d",&age);

    printf("Tell CGPA ->");
    scanf("%f",&cgpa);

    fprintf(fptr, "Student Name -> %s \n",name);
    fprintf(fptr, "Student Age -> %d \n",age);
    fprintf(fptr, "Student CGPA -> %f \n",cgpa);

    }
    return 0;
}
