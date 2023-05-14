#include <stdio.h>
#define rows 30
#define columns 30
int main()
{
    int matrix[rows][columns];
    int r, col;
    int i, j;
    printf("Enter number of rows and columns less than 30.\n");

    printf("Number of rows: ");
    scanf("%d", &r);

    printf("Number of columns: ");
    scanf("%d", &col);

    printf("Enter total %d elements", r * col);

    printf("\n------------------------------------------------------------------------------------\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n---------------------------------------------------------------------------------------\n");

    printf("Original Matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n---------------------------------------------------------------------------------------\n");
    printf("Transpose of Matrix\n");
    for (j = 0; j < col; j++)
    {
        for (i = 0; i < r; i++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}