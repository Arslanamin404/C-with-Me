#include <stdio.h>
#include <conio.h>
// Function declarations
void readArray(int array[][10], int row, int col);
void sortArrayInAscending(int array[][10], int row, int col);
void sortArrayInDescending(int array[][10], int row, int col);

int main()
{
    int exit;
    char name[30];

    printf("\n\nThis sorting program is created with the help of Function.\n");
    printf("Enter your name: ");
    gets(name);
    do
    {

        printf("---------------------------------------------------------------------------------------------------------------------\n");

        printf("Hello %s, welcome to this program. In this program you will be able to sort the 2D-Array (MATRIX) in both Ascending and Descending Order.You will be first asked to enter the number of rows and columns and then you will be asked to enter the elements of Array.Finally the sorted Array will be on your output screen.\n", name);

        printf("---------------------------------------------------------------------------------------------------------------------\n");

        int row, col;
        printf("Enter number of rows and columns of Matrix: ");
        scanf("%d %d", &row, &col);

        printf("------------------------------------------------------------------------\n");

        int arr[row][col];

        // function calls
        readArray(arr, col, row);
        sortArrayInAscending(arr, col, row);
        sortArrayInDescending(arr, col, row);

        printf("-----------------------------------------------------------------------------------\n\n");
        printf("Do you want to run again?\nEnter 1 to run again and 0 to exit the program.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\n------------------------------------------------------------------------------------------------------------------\n\n");

            printf("Thank You %s, have a nice time ahead.\nWe sincerely hope you enjoyed this programme and got the answers to all of your questions correctly.\n", name);
            printf("Visit us again.\n");
            printf("Regards Mr. Mohammad Arsalan Rather.\n");

            printf("\n------------------------------------------------------------------------------------------------------------------\n");
        }
        else
        {
            printf("\n------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Welcome Back to this programme.\n");
        }
    } while (exit != 0);
    getch();
    return 0;
}

// function definition
void readArray(int array[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ELement [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void sortArrayInAscending(int array[][10], int row, int col)
{
    int temp[row][col];

    // sorting loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // this loop is for swapping
            for (int k = j + 1; k < col; k++)
            {
                if (array[i][j] > array[i][k])
                {
                    temp[i][j] = array[i][k];
                    array[i][k] = array[i][j];
                    array[i][j] = temp[i][j];
                }
            }
        }
    }

    printf("------------------------------------------------------------------------\n");
    printf("Sorted Array (Ascending Order): \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
}

void sortArrayInDescending(int array[][10], int row, int col)
{
    int temp[row][col];

    // sorting loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // this loop is for swapping
            for (int k = j + 1; k < col; k++)
            {
                if (array[i][j] < array[i][k])
                {
                    temp[i][j] = array[i][k];
                    array[i][k] = array[i][j];
                    array[i][j] = temp[i][j];
                }
            }
        }
    }

    printf("------------------------------------------------------------------------\n");
    printf("Sorted Array (Descending Order): \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", array[i][j]);
        }
        printf("\n");
    }
}
