/*Create a structure called 'student' that can contain data given below:
ROll number, Name, Department, Course, yearOfJoining.
Assume that there are not more than 450 students in the college.
1. Write a function to print name of all the students who joined in that particular year.
2. Write a function to print the data of all students whose roll number is received by the function.
*/

#include <stdio.h>
#include <conio.h>
#define size 450

struct date
{
    int date, month, year;
};

struct student
{
    int rollNum;
    char name[50];
    char department[20];
    char course[20];
    struct date yearOfJoining;
} person[size];

/* Now this person[] is global scoped variable of structure student datatype.
 it is the another way of declaring struct variables, ["stuct student person[size]"]. */

void displayNames(int year, int n);
void displayData(int rollNum, int n);
int main()
{
    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("Welcome user to this software, in this program you can enter and retrieve the data of students.\nFirst you will be asked to enter number of students and then the RollNumber, Name, Department, Course, yearOfJoining  (dd-mm-yyyy) respectively.\nThen you will be asked to enter the year to get the list of names of student who joined in that particular year.\nThen at the end you will be asked to enter the rollNumber of student to fetch the data of that student.\n");
    printf("-------------------------------------------------------------------------------------------------------\n");

    // taking number of students only for testing purpose.
    int n;
    printf("Number of students to be entered: ");
    scanf("%d", &n);
    printf("--------------------------------------------\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details of Student %d:\n", i + 1);
        printf("RollNumber: ");
        scanf("%d", &person[i].rollNum);
        fflush(stdin);

        printf("Name: ");
        gets(person[i].name);

        printf("Department: ");
        gets(person[i].department);

        printf("Course: ");
        gets(person[i].course);

        printf("Year of Joining (dd-mm-yyyy):\n");
        printf("Date: ");
        scanf("%d", &person[i].yearOfJoining.date);
        printf("Month: ");
        scanf("%d", &person[i].yearOfJoining.month);
        printf("Year: ");
        scanf("%d", &person[i].yearOfJoining.year);

        printf("------------------------------------------------\n\n");
    }

    printf("Details of all students enrolled in this college:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("RollNumber: %d\n", person[i].rollNum);
        printf("Name: %s\n", person[i].name);
        printf("Department: %s\n", person[i].department);
        printf("Course: %s\n", person[i].course);
        printf("Year Of Joining: %d-%d-%d", person[i].yearOfJoining.date, person[i].yearOfJoining.month, person[i].yearOfJoining.year);
        printf("\n---------------------------------------------------\n");
    }

    
    printf("\nPress Any key to continue to do search operations....\n");
    getch();
    
    int year;
    printf("\nEnter the year to get the name of students joined in that particular year.\nYear: ");
    scanf("%d", &year);
    printf("--------------------------\n");
    // displayNames(year);
    displayNames(year, n);


    
    printf("\n---------------------------------------------------\n");
    int rollNum;
    printf("\nEnter RollNumber to get the data of student.\n\nRollNumber: ");
    scanf("%d", &rollNum);
    printf("-------------------------------\n");
    // displayData(rollNum);
    displayData(rollNum, n);

    getch();
    return 0;
}

void displayNames(int year, int n)
{
    printf("List of students joined in year %d: \n", year);
    printf("------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        if ((person[i].yearOfJoining.year) == year)
        {
            printf("%d. %s\n", i + 1, person[i].name);
        }
        else{
            printf("No student joined the college in the year %d.",year);
            break;
        }
    }
}

void displayData(int rollNum, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((person[i].rollNum) == rollNum)
        {
            printf("RollNumber: %d\n", person[i].rollNum);
            printf("Name: %s\n", person[i].name);
            printf("Department: %s\n", person[i].department);
            printf("Course: %s\n", person[i].course);
            printf("Year Of Joining: %d-%d-%d", person[i].yearOfJoining.date, person[i].yearOfJoining.month, person[i].yearOfJoining.year);
            printf("\n---------------------------------------------------\n");
        }
        else
        {
            printf("Invalid RollNumber\n");
            break;
        }
    }
}
