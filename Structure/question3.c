/*
Wap to arrange the list of students of 2nd semester in descending order of marks obtained in computer applications 1st semester.
RollNum
Name
Marks obtained
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct students
{
    int rollNum;
    char name[50];
    float marks;
};
void sortStudent(struct students *student, int size);
int main()
{
    printf("This program will arrange the list of students of 2nd semester in descending order of marks obtained in computer applications 1st semester.\nYou will be asked to enter the RollNumber Name and Marks obtained by the student.\n\n");

    int size;
    printf("Enter total number of students: ");
    scanf("%d", &size);
    printf("-----------------------------------\n");

    struct students student[size];
    // taking input from user to store data;
    for (int i = 0; i < size; i++)
    {
        printf("RollNumber:");
        scanf("%d", &student[i].rollNum);
        fflush(stdin);

        printf("Name:");
        gets(student[i].name);

        printf("Marks obtained:");
        scanf("%f", &student[i].marks);
        printf("\n");
    }
    
    printf("\nPress any key to view the list of students of 2nd semester in order of marks obtained in Computer Applications . . .");
    getch();
    system("cls");  //stdlib.h

    // sorting on the bases of marks obtained
    sortStudent(student, size);

    // sorted struct
    printf("\nlist of students of 2nd semester Computer Application with RollNumber Name and MarksObtained.");
    printf("\n-----------------------------------------------------------------------------------------------\n\n");
 
    for (int i = 0; i < size; i++)
    {
        // printf("%d\t\t%s\t\t\t%.2f\n", student[i].rollNum, student[i].name, student[i].marks);

        printf("RollNumber: %d\n", student[i].rollNum);
        printf("Name: %s\n", student[i].name);
        printf("Marks obtained: %.2f\n", student[i].marks);
        printf("-------------------------------\n");
    }
    getch();
    return 0;
}

void sortStudent(struct students *student, int size)
{
    // sorting on the bases of marks obtained
    float temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (student[i].marks < student[j].marks)
            {
                temp = student[j].marks;
                student[j].marks = student[i].marks;
                student[i].marks = temp;
            }
        }
    }
}