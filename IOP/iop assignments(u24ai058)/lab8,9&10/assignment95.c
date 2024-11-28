#include<stdio.h>

struct employees {
    int number;
    char name[20];
    float salary;
};

int main() {
    int n;
    struct employees *ptr;
    struct employees e[50];

    // Input the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);  // Fix: pass address of n

    // Input the details of each employee
    for(int i = 0; i < n; i++) {
        ptr = &e[i];  // Pointing to the current employee

        // Input employee details
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &ptr->number);
        
        printf("Employee Name: ");
        scanf(" %[^\n]", ptr->name);  // Fix: use this to read strings with spaces
        
        printf("Employee Salary: ");
        scanf("%f", &ptr->salary);  // Fix: use %f for reading float
    }

   
    for(int i = 0; i < n; i++) {
        ptr = &e[i];  // Pointing to the current employee
        printf("%d\t\t%s\t%.2f\n", ptr->number, ptr->name, ptr->salary);
    }

    return 0;
}