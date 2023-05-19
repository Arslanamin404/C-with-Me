// WAP to multiply two matrices.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\n\n------------------------------------------------------------------------------------------------------------------\n");
    int exit;
    do
    {

        printf("Welcome to the Matrix multiplication program.\n NOTE: Number of Columns of Matrix_A must be equal to Number of Rows of Matrix_2.\nOtherwise we can not multiply two matrices.\n");

        printf("-------------------------------------------------------------------------------------------------------------------\n");

        int row_A, column_A, row_B, column_B;

        printf("Enter number of Rows of Matrix_A: ");
        scanf("%d", &row_A);
        printf("Enter number of Columns of Matrix_A: ");
        scanf("%d", &column_A);

        int MatrixA[row_A][column_A];

        printf("--------------------------------------------------------------\n");

        printf("Enter number of Rows of Matrix_B: ");
        scanf("%d", &row_B);
        printf("Enter number of Columns of Matrix_B: ");
        scanf("%d", &column_B);

        int MatrixB[row_B][column_B];

        printf("--------------------------------------------------------------\n");

        // we know that : A[m][n] , B[p][q] => 'n' must be equal to 'p'
        // Checks if matrix multiplication is possible
        if (column_A != row_B)
        {
            printf("Matrix Multiplication is not possible.\nError: Number of Columns of Matrix 1 must be equal to Number of Rows of Matrix 2.\n\n");
            return 0; // stops the execution of program
        }

        // taking input for matrix_A
        printf("Elements of Matrix_A: \n");
        printf("----------------------\n");
        
        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_A; j++)
            {
                printf("Matrix_A [%d][%d] = ", i, j);
                scanf("%d", &MatrixA[i][j]);
            }
            printf("\n");
        }

        printf("--------------------------------------------------------------\n");

        // taking input for matrix_B
        printf("Elements of Matrix_B: \n");
        printf("----------------------\n");
        
        for (int i = 0; i < row_B; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                printf("Matrix_B [%d][%d] = ", i, j);
                scanf("%d", &MatrixB[i][j]);
            }
            printf("\n");
        }

        printf("--------------------------------------------------------------\n");

        // Printing matrix 1
        printf("Matrix_A (%dx%d)\n", row_A, column_A);
        printf("---------------\n");

        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_A; j++)
            {
                printf("%5d", MatrixA[i][j]);
            }
            printf("\n");
        }

        printf("--------------------------------------------------------------\n");

        // Printing matrix 2
        printf("Matrix_B (%dx%d)\n", row_B, column_B);
        printf("---------------\n");

        for (int i = 0; i < row_B; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                printf("%5d", MatrixB[i][j]);
            }
            printf("\n");
        }
        printf("--------------------------------------------------------------\n");

        // Matrix Multiplication
        // we know that : A[m][n] * B[p][q] = res[m][q]
        int resultMatrix[row_A][column_B];

        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                // ( a [i][0], a [i][1], a[i][2],...... ) * ( b [0][j], b [2][j], b [2][j],..... )
                resultMatrix[i][j] = 0;

                for (int k = 0; k < column_A; k++)
                {
                    resultMatrix[i][j] = resultMatrix[i][j] + (MatrixA[i][k] * MatrixB[k][j]);
                }
            }
        }

        // Printing Matrix multiplication
        printf("Resultant Matrix (%dx%d)\n", row_A, column_B);
        printf("----------------------------\n");

        for (int i = 0; i < row_A; i++)
        {
            for (int j = 0; j < column_B; j++)
            {
                printf("%5d", resultMatrix[i][j]);
            }
            printf("\n");
        }
        printf("----------------------------------------------------------------------------------------------\n\n");

        printf("Do you want to run again?\nEnter 0 to exit and 1 to run again: ");
        scanf("%d", &exit);

        printf("--------------------------------------------------------------\n\n");

    } while (exit != 0);

    getch();
    return 0;
}