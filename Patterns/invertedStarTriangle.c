#include <stdio.h>
int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int temp = rows;

    // Using additional variable to store original value of rows.
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= temp; j++)
        {
            printf("* ");
        }
        temp--;
        printf("\n");
    }

    /*
    //using mathematical formula
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= rows + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    */
    return 0;
}