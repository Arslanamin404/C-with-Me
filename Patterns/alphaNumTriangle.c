/*  Sample:
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char alpha = (char)d;
            a++;

            // we will make use of ternary operator we can also use if else
            //i DENOTES LINE NUMBER OR ROW NUMBER
            (i % 2 != 0)? printf("%d ", j):printf("%c ", alpha);
        }
        printf("\n");
    }
    return 0;
}