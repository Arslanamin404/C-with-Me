/* Any year is input through the keyboard.WAP to determine whether the year is leap year or not.
condition: if year is divisible by 100 it is not a leap year unless Year is also divisible by 400.
            if the year is not divisible by 100 it must be divisible by 4.
we will use nested if else statements

*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a Leap Year.\n", year);
            }
            else
            {
                printf("%d is not a Leap Year.\n", year);
            }
        }
        else
        {
            if (year % 4 == 0)
            {
                printf("%d is a Leap Year.\n", year);
            }
            else
            {
                printf("%d is not a Leap Year.\n", year);
            }
        }

    return 0;
}