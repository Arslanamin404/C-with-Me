// WAP to print the row number having the maximum sum in a given matrix.
#include <stdio.h>
#include <conio.h>
int main()
{
    int row, col;
    printf("enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int totalSum = 0, maxRow = 0;

    printf("\n-------------------------------------------------------------------------------------\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("-------------------------\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    // rowSUm
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum = rowSum + arr[i][j];
        }
        if (rowSum > totalSum)
        {
            totalSum = rowSum;
            maxRow = i;
        }
    }

    printf("-------------------------------------------------------------------------------------\n");

    printf("Row of index %d is having a maximum sum of %d", maxRow, totalSum);

    printf("\n-------------------------------------------------------------------------------------\n\n");

    return 0;
}
