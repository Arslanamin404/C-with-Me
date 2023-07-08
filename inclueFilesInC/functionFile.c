
#include <stdio.h>
void sum(int *a, int *b)
{
    printf("Sum of %d and %d is %d\n\n", *a, *b, (*a + *b));
}

void difference(int *a, int *b)
{
    printf("Difference of %d and %d is %d\n\n", *a, *b, (*a - *b));
}

void product(int *a, int *b)
{
    printf("Product of %d and %d is %d\n\n", *a, *b, (*a * *b));
}

void quotient(int *a, int *b)
{
    printf("Quotient of %d and %d is %d\n\n", *a, *b, (*a / *b));
}

void remainderFunc(int *a, int *b)
{
    printf("Remainder of %d and %d is %d\n\n", *a, *b, (*a % *b));
}
