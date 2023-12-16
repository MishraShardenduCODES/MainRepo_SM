// 5. Write a C program to check to read the marks of a student and classify them into different grades.
//     If the marks secured are greater than or equal to 90, the student is awarded Grade A;
//     if they are greater than or equal to 80 but less than 90, Grade B is awarded;
//     if they are greater than or equal to 65 but less than 80, Grade C is awarded;
//     otherwise Grade D is awarded.
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 80) {
        printf("Grade B\n");
    } else if (marks >= 65) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    return 0;
}
