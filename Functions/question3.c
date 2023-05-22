/*
Any year is entered through keyboard. Write a function that determines if the year is leap year or not.
Condition: if year is divisible by 100 it is not a leap year unless Year is also divisible by 400.
            if the year is not divisible by 100 it must be divisible by 4.
*/
#include <stdio.h>

void leapYearCheck(int y)
{
    if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
    {
        printf("%d is Leap Year", y);
    }
    else
    {
        printf("%d is not a Leap Year", y);
    }
}

int main()
{
    int year, exit;

    do
    {
        printf("\n\n----------------------------------------------------------------------------------------------------\n");

        printf("This program will check whether the year is leap year or not.\n");

        printf("------------------------\n");

        printf("Enter year: ");
        scanf("%d", &year);

        printf("------------------------\n");

        leapYearCheck(year);

        printf("\n----------------------------------------------------------------------------------------------------\n\n");

        printf("Do you want to check again? Enter 1 to continue and 0 to exit the program.\nEnter your choice(0/1): ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\n------------------------\n");
            printf("Thank You. Have a nice time\nVisit Again.\n\n");
        }

    } while (exit != 0);

    return 0;
}