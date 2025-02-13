//Define a structure for employee records.
#include <stdio.h>
struct Employee {
    char name[50];
    int empID;
    float salary;
    char department[30];
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    scanf("%49s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    printf("Enter Department: ");
    scanf("%29s", emp.department);

    // Display employee details
    printf("\nEmployee Record:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.empID);
    printf("Salary: %.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);

    return 0;
}
