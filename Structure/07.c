//Define a structure for student records.
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
    char grade;
};

int main() {
    struct Student student1;
    
    // Input student details
    printf("Enter student name: ");
    scanf("%49s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);
    
    // Assign grade based on marks
    if (student1.marks >= 90) {
        student1.grade = 'A';
    } else if (student1.marks >= 80) {
        student1.grade = 'B';
    } else if (student1.marks >= 70) {
        student1.grade = 'C';
    } else if (student1.marks >= 60) {
        student1.grade = 'D';
    } else {
        student1.grade = 'F';
    }
    
    // Display student details
    printf("\nStudent Record:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("Grade: %c\n", student1.grade);
    
    return 0;
}
