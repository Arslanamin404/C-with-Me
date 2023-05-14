#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 1, n, factorial = 1;
    printf("Enter num to find its factorial: ");
    scanf("%d", &n);

    // for loop
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d using for loop is: %d\n\n", n, factorial);

    // While loop
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d using while loop is: %d\n", n, factorial);

/*
    do
    {
        factorial = factorial * i;
        i++;
    } while (i<=n);
    printf("Factorial of %d using do while loop is: %d", n, factorial);
*/
    getch();
    return 0;
}