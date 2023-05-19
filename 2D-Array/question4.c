// Find the largest and smallest element of 2d array
#include <stdio.h>
#include <conio.h>
int main()
{
    int rows, columns;
    printf("ENter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];

    // taking input from user
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("element [%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------------------------------------------------------------------\n");

    // printing array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    printf("------------------------------------------------------------------------------------------------\n");

    // finding the largest element of array
    int largestElement = arr[0][0];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] > largestElement)
            {
                largestElement = arr[i][j];
            }
        }
    }

    // finding the smallest element of array
    int smallestElement = arr[0][0];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] < smallestElement)
            {
                smallestElement = arr[i][j];
            }
        }
    }

    printf("Largest Element in 2d array is %d", largestElement);

    printf("\n------------------------------------------------------------------------------------------------\n");

    printf("Smallest Element in 2d array is %d", smallestElement);

    printf("\n------------------------------------------------------------------------------------------------\n");

    getch();
    return 0;
}