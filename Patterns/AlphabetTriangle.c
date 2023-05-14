// WAP to print triangle alphabet pattern.
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
            printf("%c ", alpha);
            a++;
        }
        printf("\n");
    }
    return 0;
}