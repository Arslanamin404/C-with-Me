#include <stdio.h>
#define rows 30
#define columns 30
int main()
{
    int matrix[rows][columns];
    int r, c;
    int i,j;
    printf("Enter number of rows and columns less than 30.\n");

    printf("Number of rows: ");
    scanf("%d", &r);

    printf("Number of columns: ");
    scanf("%d", &c);

    printf("Enter total %d elements", r * c);

    printf("\n\n------------------------------------------------------------------------------------\n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n---------------------------------------------------------------------------------------\n\n");

    printf("Elements of %dx%d matrix : \n", r,c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}