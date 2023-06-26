/*
 * Write a program that compares two given dates. To store date use structure say date that contains three members
 * namely date, month and year. If the dates are equal then display message as "Equal" otherwise "Unequal".
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct
{
    int dd, mm, yyyy;
} date;

date dates[2];

void takeInput(date *dates);
void result(date *dates);

int main()
{
    int exit;
    do
    {
        system("cls");
        printf("This program will compares two dates inputted by the user.You will be asked to enter dates in DD MM YYYY format.\n\n ");
        takeInput(dates);
        result(dates);

        printf("\nDo you want to run again this program? Press any key to continue and 0 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\n\nThank you! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us again\nRegards: Future Gen\n\n");
        }

    } while (exit != 0);

    getch();
    return 0;
}

void takeInput(date *dates)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Date %d (DD MM YYYY): ", i + 1);
        printf("\n------------------------------\n");
        printf("DD: ");
        scanf("%d", &dates[i].dd);
        printf("MM: ");
        scanf("%d", &dates[i].mm);
        printf("YYYY: ");
        scanf("%d", &dates[i].yyyy);
        printf("---------------------------------------\n");
    }
}

void result(date *dates)
{
    for (int i = 0; i < 2; i++)
    {
        if (dates[i].dd == dates[i + 1].dd && dates[i].mm == dates[i + 1].mm && dates[i].yyyy == dates[i + 1].yyyy)
        {
            printf("\nDates are EQUAL\n\n");
            break;
        }
        else
        {
            printf("\nDates are UNEQUAL\n\n");
            break;
        }
    }
}
