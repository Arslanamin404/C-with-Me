#include <stdio.h>
int main()
{
    int num1, num2, i;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Odd nums from %d to %d are :",num1,num2 );
    for (i = num1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}