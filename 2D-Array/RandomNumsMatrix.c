/*
****** THIS PROGRAM WILL GENERATE A MATRIX OF RANDOM UNIQUE NUMBERS******
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

// Function to check if a number is a duplicate in the matrix
int isDuplicate(int row, int col, int arr[row][col], int num);

int main()
{
    int exit;
    do
    {
        system("cls");
        printf("This program will generate a matrix of random number you have to only input number of rows and columns.\n\n");
        int row, col;
        printf("Enter rows and cols of Matrix: ");
        scanf("%d %d", &row, &col);

        // Declare a 2D array to store the matrix
        int matrix[row][col];

        // Calculate the total number of elements in the matrix
        int totalElements = row * col;

        // Seed the random number generator with the current time
        srand(time(NULL));

        int randomNum;

        // Generate random numbers and fill the matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                // Generate a random number
                do
                {
                    randomNum = rand() % totalElements + 1;
                } while (isDuplicate(row, col, matrix, randomNum)); // Check if the number is a duplicate

                // Assign the generated number to the current matrix element
                matrix[i][j] = randomNum;
            }
        }

        // Print the randomly generated integer matrix
        printf("\nRandomly generated integer matrix:\n");
        printf("\n-------------------------------------------------\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%4d   |", matrix[i][j]);
            }
            printf("\n");
        }
        printf("---------------------------------------------------\n");

        printf("\nDo you want to run again this program? Press any key to continue and 0 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &exit);

        if (exit == 0)
        {
            printf("\nThank you! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us again\nRegards: Future Gen\n\n");
        }
    } while (exit != 0);

    getch();
    return 0;
}

// Function to check if a number is a duplicate in the matrix
int isDuplicate(int row, int col, int arr[row][col], int num)
{
    // Iterate over the matrix and check if the number already exists
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == num)
            {
                return 1; // Number is a duplicate
            }
        }
    }

    return 0; // Number is not a duplicate
}
