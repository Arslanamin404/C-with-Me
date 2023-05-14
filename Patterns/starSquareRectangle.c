// WAP to print solid square / rectangle star pattern.
#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("%d x %d matrix is given below:\n", rows,columns);
    // Logic
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}