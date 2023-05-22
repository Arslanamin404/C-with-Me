// write a function power(a,b) to calculate the value of 'a' raised to 'b'
#include <stdio.h>

float raisedPower(float x, int y)
{
    float power = 1;
    for (int i = 1; i <= y; i++)
    {
        power = power * x;
    }
    return power;
}

int main()
{
    float x, pow;
    int y;

    printf("\n\n--------------------------------------------------------------------------------------------\n");

    printf("Welcome to the exponential power calculator.\nIt calculates the value of 'a' raised to 'b'.\n");

    printf("Enter two numbers: ");
    scanf("%f %d", &x, &y);

    pow = raisedPower(x, y);
    printf("%0.2f to the power %d is %.2f", x, y, pow);

    printf("\n----------------------------------------------------------------------------------------------\n\n");
    return 0;
}
