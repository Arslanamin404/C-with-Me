#include <stdio.h>
int main()
{
    int rows, temp;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    temp = rows; // in temp value of rows will not be modified
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= temp; j++)
        {
            printf("%d ", j);
        }
        temp--;
        printf("\n");
    }
    return 0;
}