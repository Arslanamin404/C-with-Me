/* Any year is input through the keyboard.WAP to determine whether the year is leap year or not.
condition: if the year is divisible by 4, 100 and 400, it is said to be leap year.
exceptional cases of leap year are: 2000 was a leap year but the years 1700,1800 and 1900 were not.
we will use nested if else statements

*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
            

// using logical operator
         if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
         {
             printf("%d is a Leap Year.\n", year);
         }
         else
         {
             printf("%d is not a Leap Year.\n", year);
         }
            
// using nested if else            
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
