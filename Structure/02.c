//Define a structure STUDENT and find the student with the highest CGPA.
#include <stdio.h>

typedef struct {
    char name[50];
    int roll_no;
    char branch[20];
    float CGPA;
} STUDENT;

int main() {
    STUDENT students[5], top_student;
    printf("Enter details of 5 students (Name, Roll No, Branch, CGPA):\n");

    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        scanf("%s %d %s %f", students[i].name, &students[i].roll_no, students[i].branch, &students[i].CGPA);
    }

    top_student = students[0];
    for (int i = 1; i < 5; i++) {
        if (students[i].CGPA > top_student.CGPA) {
            top_student = students[i];
        }
    }

    printf("Top Student: %s (Roll No: %d, Branch: %s, CGPA: %.2f)\n", top_student.name, top_student.roll_no, top_student.branch, top_student.CGPA);
    return 0;
}
