/* WAP to store 10 at every index of 2D matrix with 5 rows and 5 columns
 */
#include <stdio.h>
#include <conio.h>
int main()
{
    int matrix[5][5];
    int num = 10;

    printf("\n---------------------------------------------------------------------------\n");
    
    printf("WAP to store 10 at every index of 2D matrix with 5 rows and 5 columns");

    printf("\n---------------------------------------------------------------------------\n");

// LOGIC
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%5d",num);
        }
        printf("\n");
    }
    
    printf("---------------------------------------------------------------------------\n");
    
    getch();
    return 0;
}