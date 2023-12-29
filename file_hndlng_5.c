#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

typedef struct {
    char name[MAX_LENGTH];
    int age;
    float gpa;
} Student;

void printSeparator() {
    printf("-------------------------\n");
}

void printHeader() {
    printf("Student Information:\n");
    printSeparator();
    printf("Name          | Age | GPA\n");
    printSeparator();
}

void printStudent(Student *student) {
    printf("%-13s | %-3d | %.1f\n", student[0].name, student[0].age, student[0].gpa);
}

int main() {
    FILE *file = fopen("data.csv", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char line[MAX_LENGTH];
    Student students[MAX_LENGTH];
    int studentCount = 0;

    // Read header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%[^,], %d, %f", students[studentCount].name, &students[studentCount].age, &students[studentCount].gpa);
        studentCount++;
    }

    fclose(file);

    // Print student information
    printHeader();
    for (int i = 0; i < studentCount; i++) {
        printStudent(students + i);
    }

    return 0;
}
