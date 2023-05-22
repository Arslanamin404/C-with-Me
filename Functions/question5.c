// Write a function that takes an integer as a parameter and checks if it is a prime number.
#include <stdio.h>

void isPrime(int n)
{
    int factor = 0;

    // bex a number is never divisible by a number more than its half.
    //  i=2, bex every num is divisible by 2
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            factor++;
            break;
        }
    }
    if (factor == 0 && n != 1)
    {
        printf("%d is Prime.\n", n);
    }
    else if (factor != 0)
    {
        printf("%d is Composite.\n", n);
    }
    else if (n < 0)
    {
        printf("Negative integers can not be prime nor composite.\n");
    }
    else
    {
        printf("%d is neither a Prime Number nor a Composite Number.\n", n);
    }
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    isPrime(num);
    return 0;
}