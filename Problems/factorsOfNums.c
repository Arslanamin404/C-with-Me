#include <stdio.h>
#include <conio.h>
int main()
{
    int input, i, factor = 0;
    printf("Enter number: ");
    scanf("%d", &input);

    printf("Factors of %d are: ", input);

    for (i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            printf("%d ", i);
        }
    }
    getch();
    return 0;
}