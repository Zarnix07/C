//Employee Structure - Sort by Salary in Descending Order.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int empId;
    char empName[50];
    char empDept[50];
    struct Date dateOfJoining;
    float empSalary;
};

void sortEmployees(struct Employee *emp, int n) {
    struct Employee temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (emp[i].empSalary < emp[j].empSalary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee *emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].empName);
        printf("Department: ");
        scanf(" %[^\n]", emp[i].empDept);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].dateOfJoining.day, &emp[i].dateOfJoining.month, &emp[i].dateOfJoining.year);
        printf("Salary: ");
        scanf("%f", &emp[i].empSalary);
    }

    sortEmployees(emp, n);

    printf("\nEmployee details sorted by Salary (Descending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("\nID: %d\nName: %s\nDepartment: %s\nDate of Joining: %02d-%02d-%04d\nSalary: %.2f\n",
               emp[i].empId, emp[i].empName, emp[i].empDept,
               emp[i].dateOfJoining.day, emp[i].dateOfJoining.month, emp[i].dateOfJoining.year,
               emp[i].empSalary);
    }

    free(emp);
    return 0;
}
