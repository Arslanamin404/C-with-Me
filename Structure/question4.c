/*
* Write a program to sort the list of date of births of people in ascending order of years, months, dates respectively.

* If the date inputted by user is incorrect, dont print that value to output screen.

todo: If the year of two people was same, then cheka for Month, if both month and year was same then check for date.

! Store the following data in date structure:
! Date
! Month
! Year
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct dates
{
    char name[50];
    int dd, mm, yyyy;
};

void takeInput(struct dates *dob, int size);
void sortDob(struct dates *dob, int size);
void printDob(struct dates *dob, int size);

int main()
{
    int exit;
    do
    {
        system("cls"); // stdlib.h
        printf("Welcome to this program, in this program you will be asked to enter the names and date of births of people respectively.\nDOB's in format of DD MM YYYY, first you will be asked to enter Date(dd), then Month(mm), and then Year(yyyy).In case a user enters a wrong date, date will be skipped and will not be printed on the screen.\n\n");

        int size;
        printf("Number of people: ");
        scanf("%d", &size);
        fflush(stdin);

        struct dates dob[size];

        printf("---------------------\n\n");
        printf("Enter Your DOB's (DD-MM-YYYY) here: ");
        printf("\n--------------------------------------\n");

        takeInput(dob, size);

        printf("\nPress any key to view the list of DOB'S with names in ascending order of Date Of Birth of the user . . .");
        getch();
        system("cls"); // stdlib.h

        sortDob(dob, size);

        printf("\n| --------------------------------------------------------- |\n");
        printf("| S.No\t\tNAME\t\t\t\tDD-MM-YYYY  |");
        printf("\n| --------------------------------------------------------- |\n");

        printDob(dob, size);

        printf("| --------------------------------------------------------- |\n");

        printf("\nDo you want to run again this program? Press any key to continue and 0 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\nThank you! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us again\nRegards: Future Gen\n\n");
        }
    } while (exit != 0);

    getch();
    return 0;
}

void takeInput(struct dates *dob, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Person: %d\n", i + 1);
        fflush(stdin);

        printf("Name: ");
        gets(dob[i].name);

        printf("DD: ");
        scanf("%d", &dob[i].dd);

        printf("MM: ");
        scanf("%d", &dob[i].mm);

        printf("YYYY: ");
        scanf("%d", &dob[i].yyyy);
        printf("------------------------------------------------------------\n");
    }
}

void sortDob(struct dates *dob, int size)
{
    struct dates temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (dob[i].yyyy > dob[j].yyyy)
            {
                temp = dob[j];
                dob[j] = dob[i];
                dob[i] = temp;
            }
            if (dob[i].yyyy == dob[j].yyyy)
            {
                if (dob[i].mm > dob[j].mm)
                {
                    temp = dob[j];
                    dob[j] = dob[i];
                    dob[i] = temp;
                }
            }
            if (dob[i].yyyy == dob[j].yyyy && dob[i].mm == dob[j].mm)
            {
                if (dob[i].dd > dob[j].dd)
                {
                    temp = dob[j];
                    dob[j] = dob[i];
                    dob[i] = temp;
                }
            }
        }
    }
}

void printDob(struct dates *dob, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (dob[i].dd < 0 || dob[i].dd > 31 || dob[i].mm < 0 || dob[i].mm > 12 || dob[i].yyyy > 2023)
        {
            // printf("\t\tInvalid Date\n");
            return; //wrong dates will not be printed
        }
        else
        {
            printf("|  %-13d %-30s %3d-%d-%d  |\n", i + 1, dob[i].name, dob[i].dd, dob[i].mm, dob[i].yyyy);
        }
    }
}
