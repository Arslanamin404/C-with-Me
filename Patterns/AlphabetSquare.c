#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    for (int i = 1; i <= rows; i++)
    {
        int a = 1;
        for (int j = 1; j <= columns; j++)
        {
            int d = a + 64;     // d=65 which is the ASCII value of A.
            char alpha = (char)d;   //typecasting
            printf("%c ", alpha);
            a++;
        }
        printf("\n");
    }
    return 0;
}