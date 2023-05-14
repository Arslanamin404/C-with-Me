/*WAP to add 2 matrices*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int rows, columns;
    printf("\n----------------------------------------------------------------------------------------------\n");

    printf("Welcome, in this program we will add the two matrices.\nIn order to add two matrices number rows and columns of both matrices must be same. ");

    printf("\n----------------------------------------------------------------------------------------------\n");

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];
    int brr[rows][columns];
    int result[rows][columns];

    printf("------------------------------------------------------------------------------------------------\n");
    
    printf("Enter elements of array 1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n----------------------------------------------------------------------------------------------\n");
    
    printf("Enter elements of array 2\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("arr2[%d][%d] = ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    printf("\n----------------------------------------------------------------------------------------------\n");

    printf("Sum of %dx%d matrices \n\n",rows,columns);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", result[i][j]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------------------------------------------------------\n");

    getch();
    return 0;
}