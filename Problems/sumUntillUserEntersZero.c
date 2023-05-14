#include <stdio.h>
int main()
{
    int input, sum = 0;

    while (input != 0 )
    {
        printf("Enter num: ");
        scanf("%d", &input);
        sum = sum + input;
    }
    printf("%d", sum);

    return 0;
}