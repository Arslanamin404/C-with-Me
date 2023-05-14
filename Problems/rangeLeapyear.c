/*
There are two conditions for leap year:
1. If year is divisible by 400 ( for Century years).
2. If year is divisible by 4.
*/
#include <stdio.h>
int main()
{
    int startYear, endYear, i;

    printf("Enter startYear: ");
    scanf("%d", &startYear);

    printf("Enter endYear: ");
    scanf("%d", &endYear);

    printf("Leap years form %d to %d are: ", startYear, endYear);
    for (i = startYear; i <= endYear; i++)
    {
        if (i % 4 == 0 || i % 400 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}