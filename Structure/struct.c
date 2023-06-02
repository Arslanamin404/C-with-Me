#include <stdio.h>
#include <conio.h>

// Struct => Structure is a user-defined dataType. It packs Heterogeneous items in a single pack.

// Structure deceleration
struct employee
{
    int id;
    char name[40];
    float salary;
};

int main()
{
    printf("Welcome user, this program will store the details of Employees.\nYou will be asked to input number of employees and then ID,Name and salary of employee respectively");
    printf("\n--------------------------------------------------------------------------------------------------------------------\n");
    int size;

    printf("Input number of employees: ");
    scanf("%d", &size);

    // array of structures
    // e is an array of dataType employee structure.
    struct employee e[20];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);
        fflush(stdin);

        printf("Name: ");
        gets(e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("---------------------------------------------------------------------------------------------------\n");
    printf("\nDetails of Employee are given below: ");
    printf("\n---------------------------------\n");

    for (int i = 0; i < size; i++)
    {
        printf("ID: %d\nName: %s\nSalary: %0.2f", e[i].id, e[i].name, e[i].salary);
        printf("\n---------------------------------\n");
    }

    getch();
    return 0;
}
