#include <stdio.h>
int sum(int a, int b)
{
    int c = a + b;
    printf("Sum of %d and %d is %d.\n\n", a, b, c);
    return c;
}

int diff(int a, int b)
{
    int c = a - b;
    printf("Difference of %d and %d is %d.\n\n", a, b, c);
    return c;
}

int prod(int a, int b)
{
    int c = a * b;
    printf("Product of %d and %d is %d.\n\n", a, b, c);
    return c;
}

float avg(int a, int b)
{
    float c = (a + b) / 2;
    printf("Avg of %d and %d is %0.f.\n\n", a, b, c);
    return c;
}
int main()
{
    int x, y;
    
    printf("Enter two int numbers: ");
    scanf("%d %d", &x, &y);

    printf("----------------------------------\n\n");

    // function calls
    sum(x, y);
    diff(x,y);
    prod(x,y);
    avg(x,y);
    
    printf("-----------------------------------\n\n");
    return 0;
}
