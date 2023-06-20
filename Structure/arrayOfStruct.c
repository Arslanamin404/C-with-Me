#include <stdio.h>
#include <string.h>
struct student
{
    int rollNum;
    char name[31];
    float cgpa;
};
// globally declared can be accessed anywhere in the program
struct student IT[100];
struct student BCA[100];
struct student CSE[100];

void main()
{
    BCA[0].rollNum = 220583;
    strcpy(BCA[0].name, "Mohammad Arsalan Rather");
    BCA[0].cgpa = 9.5;

    IT[0].rollNum = 34252;
    strcpy(IT[0].name, "Mushtaq");
    IT[0].cgpa = 9.0;

    CSE[0].rollNum = 10983;
    strcpy(CSE[0].name, "Salman");
    CSE[0].cgpa = 9.1;

    printf("Different Arrays of same structure: ");
    printf("\n----------------------------------------------\n");
    printf("\nDepartment: BCA\nRollNum: %d\nName: %s\nCGPA: %.2f", BCA[0].rollNum, BCA[0].name, BCA[0].cgpa);
    printf("\n\n----------------------------------------------\n");
    printf("\nDepartment: IT\nRollNum: %d\nName: %s\nCGPA: %.2f", IT[0].rollNum, IT[0].name, IT[0].cgpa);
    printf("\n\n-----------------------------------------------\n");
    printf("\nDepartment: CSE\nRollNum: %d\nName: %s\nCGPA: %.2f", CSE[0].rollNum, CSE[0].name, CSE[0].cgpa);
    printf("\n\n-----------------------------------------------\n");
}