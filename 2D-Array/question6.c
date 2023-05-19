/* WAP to print the transpose of a matrix entered by the user. (Leetcode-867)
After printing store the transpose of a matrix in new array.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int row, col;

    printf("\n\n-------------------------------------------------------------------------------------------------\n");

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int transposeArr[col][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------------------------------------------------------\n");

    printf("Original Matrix(%dx%d) \n\n", row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------------------------------------------------------\n");

    printf("Transpose Matrix (%dx%d) using new matrix \n\n", col, row);

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            transposeArr[i][j] = arr[i][j];
            printf("%5d", transposeArr[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------------------------------------------------------------------------\n");

    getch();
    return 0;
}