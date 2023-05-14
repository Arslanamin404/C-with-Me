//program to print multiplication table of 10 in reverse order.
#include <stdio.h>
int main()
{
    int input, result;
    printf("Enter num : ");
    scanf("%d", &input);
    for (int i = input; i ; i--)
    {
        result = i*input;
        printf("%d x %d = %d\n", input, i, result);
    }
    return 0;
}
