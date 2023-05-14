#include <stdio.h>
int main()
{
    //Write a program to check if a number is prime or not.
    int input, i, factor = 0;
    printf("Enter any number to check if it is prime number or composite number\n");
    printf("Enter number: ");
    scanf("%d", &input);

    // i=2 bex every number is divisible by 1.
    // i<=input/2 bex a number is never divisible by a number more than its half.
    for (i = 2; i <= input / 2; i++)
    {
        if (input % i == 0) // if input number is divisible by loop numbers.
        {
            factor = factor + 1;
            break;
        }
    }
    if (factor == 0 && input != 1)
    {
        printf("%d is a Prime Number.", input);
    }
    else if (factor != 0)
    {
        printf("%d is a Composite Number.", input);
    }
    else if (input == 1)
    {
        printf("%d is neither a Prime Number nor a Composite Number.", input);
    }

    return 0;
}