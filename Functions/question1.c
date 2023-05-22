// WAP to print nCr using functions.(Combination and Permutation).
#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    printf("\n\n------------------------------------------------------------------------------------------------------\n");
    printf("This program will print nCr\n");
    int n, r;

    // preferred way to solve this problem
    
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    int ncr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("nCr = %d", ncr);

    /*
    Alternative way of solving this problem:

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
       
    int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int nrFactorial = factorial(n - r);

    int ncr = nFactorial/(rFactorial * nrFactorial);
    
    */


    printf("\n------------------------------------------------------------------------------------------------------\n\n");

    return 0;
}
