#include<string.h>
#include<stdio.h>
#include<math.h>

struct student{
    char name[50];
    int roll;
    float marks;
} s[100] ;

int main() {
    int n;
    printf("Tell how many people ->");
    scanf("%d",&n);
    int i;

    for (i = 0;i<n; i++){
        printf("For roll number ->\n");
        scanf("%d",&s[i].roll);
        printf("Enter marks -> \n");
        scanf("%f", &s[i].marks);
        printf("Enter name -> \n");
        scanf("%s",s[i].name);
        printf("\n \n \n");
    }

    for (i = 0;i<n; i++) {
        printf("Roll number:%d \n",s[i].roll);
        printf("Marks: %f \n", s[i].marks);
        printf("First name: %s",s[i].name);
        //puts(s[i].name);
        printf("\n \n \n");
    }
    return 0;
}
